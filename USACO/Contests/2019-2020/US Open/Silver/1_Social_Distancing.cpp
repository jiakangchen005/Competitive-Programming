#include <bits/stdc++.h>

using namespace std;

int N, M;

void solve(istream& cin, ostream& cout) {
    pair<long long, long long> ab[M];

    for (int i = 0; i < M; i = i + 1) {
        cin >> ab[i].first >> ab[i].second;
    }

    sort(ab, ab + M);

    long long left = 0, right = 1e18, maximum_D = left;

    while (left <= right) {
        long long D = left + (right - left) / 2, current = ab[0].first;

        int i = 0, cows = N - 1;

        while ((i < M) && (cows > 0)) {
            if (current + D <= ab[i].second) {
                current = max(current + D, ab[i].first);

                cows = cows - 1;
            } else {
                i = i + 1;
            }
        }

        if (cows == 0) {
            maximum_D = max(maximum_D, D);
            
            left = D + 1;
        } else {
            right = D - 1;
        }
    }

    cout << maximum_D << "\n";
}

int main() {
    ifstream cin("socdist.in");
    ofstream cout("socdist.out", ios::ate);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    solve(cin, cout);
}