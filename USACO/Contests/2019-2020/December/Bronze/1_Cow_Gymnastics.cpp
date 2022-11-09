#include <bits/stdc++.h>

using namespace std;

int k, n;

void solve(istream& cin, ostream& cout) {
    int sessions[k][n];

    for (int i = 0; i < k; i = i + 1) {
        for (int j = 0; j < n; j = j + 1) {
            cin >> sessions[i][j];
        }
    }

    int pairs = 0;

    for (int a = 1; a <= n; a = a + 1) {
        for (int b = 1; b <= n; b = b + 1) {
            if (a != b) {
                bool isConsistent = true;

                for (int i = 0; i < k; i = i + 1) {
                    for (int j = 0; j < n; j = j + 1) {
                        if (sessions[i][j] == a) {
                            break;
                        } else if (sessions[i][j] == b) {
                            isConsistent = false;
                            break;
                        }
                    }
                }

                pairs = pairs + isConsistent;
            }
        }
    }

    cout << pairs << "\n";
}

int main() {
    ifstream cin("gymnastics.in");
    ofstream cout("gymnastics.out", ios::ate);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> k >> n;

    solve(cin, cout);
}