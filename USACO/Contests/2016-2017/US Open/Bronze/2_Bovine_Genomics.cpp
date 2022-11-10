#include <bits/stdc++.h>

using namespace std;

int n, m;

void solve(istream& cin, ostream& cout) {
    string spotty[n], plain[n];

    for (int i = 0; i < n; i = i + 1) {
        cin >> spotty[i];
    }

    for (int i = 0; i < n; i = i + 1) {
        cin >> plain[i];
    }

    int positions = 0;

    for (int i = 0; i < m; i = i + 1) {
        bool possible = true;

        for (int j = 0; j < n; j = j + 1) {
            for (int k = 0; k < n; k = k + 1) {
                if (spotty[j][i] == plain[k][i]) {
                    possible = false;
                }
            }
        }

        positions = positions + possible;
    }

    cout << positions << "\n";
}

int main() {
    ifstream cin("cownomics.in");
    ofstream cout("cownomics.out", ios::ate);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    solve(cin, cout);
}