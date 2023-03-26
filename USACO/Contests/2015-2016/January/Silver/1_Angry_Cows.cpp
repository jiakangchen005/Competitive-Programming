#include <bits/stdc++.h>

using namespace std;

int N, K;

void solve(istream& cin, ostream& cout) {
    int x[N];

    for (int i = 0; i < N; i = i + 1) {
        cin >> x[i];
    }

    sort(x, x + N);

    int left = 0, right = 1e9, minimum_power = right;

    while (left <= right) {
        int R = left + (right - left) / 2;

        int i = 0, cows = K - 1, lower = x[0], upper = x[0];

        while (i < N) {
            upper = x[i];

            if (upper - lower <= 2 * R) {
                i = i + 1;
            } else if (upper - lower > 2 * R) {
                lower = x[i];
                cows = cows - 1;
            }
        }

        if (cows >= 0) {
            minimum_power = min(minimum_power, R);

            right = R - 1;
        } else if (cows < 0) {
            left = R + 1;
        }
    }

    cout << minimum_power << "\n";
}

int main() {
    ifstream cin("angry.in");
    ofstream cout("angry.out", ios::ate);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> K;

    solve(cin, cout);
}