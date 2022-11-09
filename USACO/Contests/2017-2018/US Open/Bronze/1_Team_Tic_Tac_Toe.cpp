#include <bits/stdc++.h>

using namespace std;

string board[3];

set<string> individual_winners, team_winners;

bool individual(string cows) {
    if ((cows[0] == cows[1]) && (cows[1] == cows[2])) {
        individual_winners.insert(cows);
        return true;
    }

    return false;
}

void team(string cows) {
    sort(cows.begin(), cows.end());

    if (!individual(cows)) {
        if (cows[0] == cows[1]) {
            cows = cows[0] + cows[2];
            team_winners.insert(cows);
        } else if (cows[1] == cows[2]) {
            cows = cows[0] + cows[1];
            team_winners.insert(cows);
        } else if (cows[2] == cows[0]) {
            cows = cows[0] + cows[1];
            team_winners.insert(cows);
        }
    }
}

void solve(istream& cin, ostream& cout) {
    for (int i = 0; i < 3; i = i + 1) {
        team(board[i]);

        string cows = "";

        for (int j = 0; j < 3; j = j + 1) {
            cows = cows + board[j][i];
        }

        team(cows);
    }

    string cows = "";

    for (int i = 0; i < 3; i = i + 1) {
        cows = cows + board[i][i];
    }

    team(cows);

    cows = "";

    for (int i = 0; i < 3; i = i + 1) {
        cows = cows + board[i][2 - i];
    }

    team(cows);

    cout << individual_winners.size() << "\n" << team_winners.size() << "\n";
}

int main() {
    ifstream cin("tttt.in");
    ofstream cout("tttt.out", ios::ate);

    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < 3; i = i + 1) {
        cin >> board[i];
    }

    solve(cin, cout);
}