#include <bits/stdc++.h>

using namespace std;

int n;

void solve(istream& cin, ostream& cout) {
    int IDs[n];

    for (int i = 0; i < n; i = i + 1) {
        cin >> IDs[i];
    }

    int sum_evens = 0, sum_odds = 0;

    for (int i = 0; i < n; i = i + 1) {
        if (IDs[i] % 2 == 0) {
            sum_evens = sum_evens + 2;
        } else if (IDs[i] % 2 == 1) {
            sum_odds = sum_odds + 1;
        }
    }

    while ((sum_evens / 2) < sum_odds) {
        sum_evens = sum_evens + 2;
        sum_odds = sum_odds - 2;
    }

    while ((sum_evens / 2) > sum_odds + 1) {
        sum_evens = sum_evens - 2;
    }

    cout << (sum_evens / 2) + sum_odds << "\n";
}

int main() {
    // ifstream cin(".in");
    // ofstream cout(".out", ios::ate/app);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    solve(cin, cout);
}