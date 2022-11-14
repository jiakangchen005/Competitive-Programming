#include <bits/stdc++.h>

using namespace std;

int n;

void solve(istream& cin, ostream& cout) {
    pair<int, char> cows[n];

    for (int i = 0; i < n; i = i + 1) {
        cin >> cows[i].second >> cows[i].first;
    }

    sort(cows, cows + n);

    int liars = n;

    for (int i = 0; i < n; i = i + 1) {
        int current = 0;

        for (int j = 0; j < i; j = j + 1) {
            if (cows[j].second == 'L') {
                current = current + 1;
            }
        }

        for (int j = n - 1; j >= i + 1; j = j - 1) {
            if (cows[j].second == 'G') {
                current = current + 1;
            }
        }

        liars = min(liars, current);
    }

    cout << liars << "\n";
}

int main() {
    // ifstream cin(".in");
    // ofstream cout(".out", ios::ate/app);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    solve(cin, cout);
}