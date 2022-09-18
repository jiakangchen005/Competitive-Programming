/*
ID: jiakang3
TASK: beads
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

int n;

string necklace;

void solve(istream& cin, ostream& cout) {
    int answer = 0;

    for (int i = 0; i < n; i = i + 1) {
        string first = necklace.substr(0, i), second = necklace.substr(i, n - i);

        reverse(first.begin(), first.end());
        reverse(second.begin(), second.end());

        string temp = first + second;

        char color = 'w';
        int current = 0, j;

        for (j = temp.length() - 1; j >= 0; j = j - 1) {
            if ((temp[j] == color) || (temp[j] == 'w')) {
                current = current + 1;
            } else if (color == 'w') {
                color = temp[j];
                current = current + 1;
            } else {
                j = j + 1;
                break;
            }
        }

        color = 'w';

        for (int k = 0; k < j; k = k + 1) {
            if ((temp[k] == color) || (temp[k] == 'w')) {
                current = current + 1;
            } else if (color == 'w') {
                color = temp[k];
                current = current + 1;
            } else {
                break;
            }
        }

        answer = max(answer, current);
    }

    cout << answer << "\n";
}

int main() {
    ifstream cin("beads.in");
    ofstream cout("beads.out", ios::ate);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    cin >> necklace;

    solve(cin, cout);
}
