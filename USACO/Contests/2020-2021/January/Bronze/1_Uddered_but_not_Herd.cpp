#include <bits/stdc++.h>

using namespace std;

map<char, int> cowphabet;
string hum;

void solve(istream& cin, ostream& cout) {
    int position = 0, answer = 1;

    for (int i = 0; i < hum.length(); i = i + 1) {
        if (cowphabet[hum[i]] <= position) {
            answer = answer + 1;
        }

        position = cowphabet[hum[i]];
    }

    cout << answer << "\n";
}

int main() {
    // ifstream cin(".in");
    // ofstream cout(".out", ios::ate/app);

    ios::sync_with_stdio(0);
    cin.tie(0);

    string letters;
    cin >> letters;

    for (int i = 0; i < 26; i = i + 1) {
        cowphabet[letters[i]] = i;
    }

    cin >> hum;

    solve(cin, cout);
}