/*
ID: jiakang3
TASK: task
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

int n;
long long bags;

int setNonincreasing(int h[]) {
    for (int i = 1; i < n - 1; i = i + 1) {
        if (h[i] < 0) {
            return -1;
        }

        if (h[i - 1] < h[i]) {
            int difference = h[i] - h[i - 1];

            h[i] = h[i] - difference;
            h[i + 1] = h[i + 1] - difference;

            bags = bags + difference * 2;
        }
    }

    return 0;
}

void solve(istream& cin, ostream& cout) {
    int h[n];

    for (int i = 0; i < n; i = i + 1) {
        cin >> h[i];
    }

    bool possible = (setNonincreasing(h) == 0) && (h[n - 1] >= 0) && (h[n - 2] >= h[n - 1]);

    if (possible) {
        reverse(h, h + n);

        if (setNonincreasing(h) == 0) {
            for (int i = 0; i < n - 1; i = i + 1) {
                if (h[i] != h[i + 1]) {
                    possible = false;
                    break;
                }
            }

            if (possible) {
                cout << bags << "\n";
                return;
            }
        }
    }

    cout << "-1\n";
}

int main() {
    // ifstream cin(".in");
    // ofstream cout(".out", ios::ate/app);

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        cin >> n;
        bags = 0;

        solve(cin, cout);
    }
}