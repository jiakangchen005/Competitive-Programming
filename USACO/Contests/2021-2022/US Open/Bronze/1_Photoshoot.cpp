#include <bits/stdc++.h>

using namespace std;

int n;
string cows;

void solve(istream& cin, ostream& cout) {
    char current = '.';

    int reversals = 0;

    for (int i = 0; i < n; i = i + 2) {
        if (cows[i] != cows[i + 1]) {
            if (cows[i] != current) {
                reversals = reversals + 1;
                current = cows[i];
            }
        }
    }

    reversals = reversals - (current == 'H');

    cout << reversals << "\n";
}

int main() {
    // ifstream cin(".in");
    // ofstream cout(".out", ios::ate/app);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    cin >> cows;

    solve(cin, cout);
}