#include <bits/stdc++.h>

using namespace std;

char gestures[3] = {'H', 'P', 'S'};

int n;

void solve(istream& cin, ostream& cout) {
    vector<map<char, int>> prefix_sums(n + 1);

    for (int i = 0; i < n; i = i + 1) {
        char gesture;
        cin >> gesture;

        prefix_sums[i + 1] = prefix_sums[i];
        prefix_sums[i + 1][gesture] = prefix_sums[i + 1][gesture] + 1;
    }

    int maximum_wins = 0;

    for (int i = 1; i <= n; i = i + 1) {
        for (int j = 0; j < 3; j = j + 1) {
            for (int k = 0; k < 3; k = k + 1) {
                int wins = prefix_sums[i - 1][gestures[j]] - prefix_sums[0][gestures[j]];

                wins = wins + (prefix_sums[n][gestures[k]] - prefix_sums[i - 1][gestures[k]]);

                maximum_wins = max(maximum_wins, wins);
            }
        }
    }

    cout << maximum_wins << "\n";
}

int main() {
    ifstream cin("hps.in");
    ofstream cout("hps.out", ios::ate);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    solve(cin, cout);
}