#include <bits/stdc++.h>

using namespace std;

struct Breeds {
    int holsteins = 0, guernseys = 0, jerseys = 0;
};

int n, q;

void solve(istream& cin, ostream& cout) {
    int cows[n];

    for (int i = 0; i < n; i = i + 1) {
        cin >> cows[i];
    }

    Breeds prefix_sums[n + 1], previous;

    prefix_sums[0] = previous;

    for (int i = 1; i <= n; i = i + 1) {
        prefix_sums[i] = previous;

        switch (cows[i - 1]) {
            case 1:
                prefix_sums[i].holsteins = previous.holsteins + 1;
                break;
            case 2:
                prefix_sums[i].guernseys = previous.guernseys + 1;
                break;
            case 3:
                prefix_sums[i].jerseys = previous.jerseys + 1;
                break;
        }

        previous = prefix_sums[i];
    }

    for (int i = 0; i < q; i = i + 1) {
        pair<int, int> query;

        cin >> query.first >> query.second;
        
        cout << prefix_sums[query.second].holsteins - prefix_sums[query.first - 1].holsteins << " ";
        cout << prefix_sums[query.second].guernseys - prefix_sums[query.first - 1].guernseys << " ";
        cout << prefix_sums[query.second].jerseys - prefix_sums[query.first - 1].jerseys << "\n";
    }
}

int main() {
    ifstream cin("bcount.in");
    ofstream cout("bcount.out", ios::ate);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> q;

    solve(cin, cout);
}