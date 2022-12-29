#include <bits/stdc++.h>

using namespace std;

int N;

void solve(istream& cin, ostream& cout) {
    pair<int, int> yx[N];

    for (int i = 0; i < N; i = i + 1) {
        cin >> yx[i].second >> yx[i].first;
    }

    sort(yx, yx + N);

    int time = -1;

    int i = 0, j = N - 1;

    while (i <= j) {
        time = max(time, yx[i].first + yx[j].first);

        int minimum_x = min(yx[i].second, yx[j].second);

        yx[i].second = yx[i].second - minimum_x;
        yx[j].second = yx[j].second - minimum_x;

        if (yx[i].second <= 0) {
            i = i + 1;
        }

        if (yx[j].second <= 0) {
            j = j - 1;
        }
    }

    cout << time << "\n";

}

int main() {
    ifstream cin("pairup.in");
    ofstream cout("pairup.out", ios::ate);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    solve(cin, cout);
}