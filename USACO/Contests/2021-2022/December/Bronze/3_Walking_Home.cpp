/*
ID: jiakang3
TASK: task
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

int n, k;

const int MAX_N = 51;
char grid[MAX_N][MAX_N];

void solve(istream& cin, ostream& cout) {
    int result = 0;

    bool RD = true, DR = true;

    for (int i = 1; i <= n; i = i + 1) {
        RD = RD && ((grid[1][i] == '.') && (grid[i][n] == '.'));
        DR = DR && ((grid[i][1] == '.') && (grid[n][i] == '.'));
    }

    result = result + RD + DR;

    if (k >= 2) {
        for (int a = 2; a < n; a = a + 1) {
            bool RDR = true, DRD = true;

            for (int b = 1; b <= a; b = b + 1) {
                RDR = RDR && (grid[1][b] == '.');
                DRD = DRD && (grid[b][1] == '.');
            }

            for (int b = 1; b <= n; b = b + 1) {
                RDR = RDR && (grid[b][a] == '.');
                DRD = DRD && (grid[a][b] == '.');
            }

            for (int b = a; b <= n; b = b + 1) {
                RDR = RDR && (grid[n][b] == '.');
                DRD = DRD && (grid[b][n] == '.');
            }

            result = result + RDR + DRD;
        }
    } 

    if (k == 3) {
        for (int a = 2; a < n; a = a + 1) {
            bool R = true, D = true;

            for (int b = 1; b <= a; b = b + 1) {
                R = R && (grid[1][b] == '.');
                D = D && (grid[b][1] == '.');
            }

            for (int b = 2; b < n; b = b + 1) {
                bool DRD = true, RDR = true;

                for (int c = 1; c <= b; c = c + 1) {
                    DRD = (R && DRD) && (grid[c][a] == '.');
                    RDR = (D && RDR) && (grid[a][c] == '.');
                }

                for (int c = a; c <= n; c = c + 1) {
                    DRD = (R && DRD) && (grid[b][c] == '.');
                    RDR = (D && RDR) && (grid[c][b] == '.');
                }

                for (int c = b; c <= n; c = c + 1) {
                    DRD = (R && DRD) && (grid[c][n] == '.');
                    RDR = (D && RDR) && (grid[n][c] == '.');
                }

                result = result + (R && DRD) + (D && RDR);
            }
        }
    }

    cout << result << "\n";
}

int main() {
    // ifstream cin(".in");
    // ofstream cout(".out", ios::ate/app);

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        cin >> n >> k;

        for (int i = 1; i <= n; i = i + 1) {
            string row;
            cin >> row;

            for (int j = 1; j <= n; j = j + 1) {
                grid[i][j] = row[j - 1];
            }
        }

        solve(cin, cout);
    }
}