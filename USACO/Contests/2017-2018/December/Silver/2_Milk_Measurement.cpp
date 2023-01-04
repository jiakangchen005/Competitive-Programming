#include <bits/stdc++.h>

using namespace std;

int N, G;

void solve(istream& cin, ostream& cout) {
    pair<int, pair<int, int>> entries[N];

    map<int, int> cows;

    map<int, int, greater<int>> rankings;

    for (int i = 0; i < N; i = i + 1) {
        cin >> entries[i].first >> entries[i].second.first;

        string change;
        cin >> change;

        entries[i].second.second = pow(-1, change[0] == '-') * stoi(change.substr(1));

        cows[entries[i].second.first] = G;
    }

    rankings[G] = cows.size();

    sort(entries, entries + N);

    int update = 0;
    
    for (int i = 0; i < N; i = i + 1) {
        int ID = entries[i].second.first, change = entries[i].second.second;

        int initial = cows[ID], final = cows[ID] + change;

        cows[ID] = final;

        bool was_highest = rankings.begin()->first == initial;

        int old_display_cows = rankings.begin()->second;

        rankings[initial] = rankings[initial] - 1;

        if (rankings[initial] == 0) {
            rankings.erase(initial);
        }

        rankings[final] = rankings[final] + 1;

        bool is_highest = rankings.begin()->first == final;

        int new_display_cows = rankings.begin()->second;

        if (was_highest != is_highest) {
            update = update + 1;
        } else if (old_display_cows != new_display_cows) {
            update = update + 1;
        }
    }

    cout << max(update, 1) << "\n";
}

int main() {
    ifstream cin("measurement.in");
    ofstream cout("measurement.out", ios::ate);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> G;

    solve(cin, cout);
}