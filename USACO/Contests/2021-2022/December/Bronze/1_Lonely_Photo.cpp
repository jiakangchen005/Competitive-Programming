/*
ID: jiakang3
TASK: task
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

int n;
string lineup;

void solve(istream& cin, ostream& cout) {
    long long result = 0;

    for (int x = 0; x < n; x = x + 1) {
        long long left = 0;

        if (x > 0) {
            if (lineup[x - 1] != lineup[x]) {
                left = left + 1;

                for (int y = x - 2; y >= 0; y = y - 1) {
                    if (lineup[y] != lineup[x - 1]) {
                        break;
                    }

                    left = left + 1;
                }
            }
        }

        long long right = 0;

        if (x + 1 < n) {
            if (lineup[x] != lineup[x + 1]) {
                right = right + 1;

                for (int y = x + 2; y < n; y = y + 1) {
                    if (lineup[y] != lineup[x + 1]) {
                        break;
                    }

                    right = right + 1;
                }
            }
        }

        result = result + left * right + max(left - 1, (long long) (0)) + max(right - 1, (long long) (0));
    }

    cout << result << "\n";
}

int main() {
    // ifstream cin(".in");
    // ofstream cout(".out", ios::ate/app);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    cin >> lineup;

    solve(cin, cout);
}