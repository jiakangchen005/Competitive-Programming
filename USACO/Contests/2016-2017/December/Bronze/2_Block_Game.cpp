#include <bits/stdc++.h>

using namespace std;

struct Board {
    string front, back;
};

int n;

void solve(istream& cin, ostream& cout) {
    Board boards[n];

    for (int i = 0; i < n; i = i + 1) {
        cin >> boards[i].front >> boards[i].back;
    }

    int result[26];
    memset(result, 0, sizeof(result));

    string letters = "";

    for (int i = 0; i < n; i = i + 1) {
        int front_count[26];
        memset(front_count, 0, sizeof(front_count));

        for (int j = 0; j < boards[i].front.length(); j = j + 1) {
            front_count[(int) (boards[i].front[j]) - 97] = front_count[(int) (boards[i].front[j]) - 97] + 1;
        }

        int back_count[26];
        memset(back_count, 0, sizeof(back_count));

        for (int j = 0; j < boards[i].back.length(); j = j + 1) {
            back_count[(int) (boards[i].back[j]) - 97] = back_count[(int) (boards[i].back[j]) - 97] + 1;
        }

        for (int j = 0; j < 26; j = j + 1) {
            result[j] = result[j] + max(front_count[j], back_count[j]);
        }
    }

    for (int i = 0; i < 26; i = i + 1) {
        cout << result[i] << "\n";
    }
}

int main() {
    ifstream cin("blocks.in");
    ofstream cout("blocks.out", ios::ate);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    solve(cin, cout);
}