/*
ID: jiakang3
TASK: task
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

char correct[3][3], guess[3][3];

void solve(istream& cin, ostream& cout) {
    int correctLettersCounter[26], guessLettersCounter[26], green = 0, yellow = 0;
    
    memset(correctLettersCounter, 0, sizeof(correctLettersCounter));
    memset(guessLettersCounter, 0, sizeof(guessLettersCounter));

    for (int i = 0; i < 3; i = i + 1) {
        for (int j = 0; j < 3; j = j + 1) {
            if (guess[i][j] == correct[i][j]) {
                green = green + 1;
            }

            correctLettersCounter[correct[i][j] - 'A'] = correctLettersCounter[correct[i][j] - 'A'] + 1;
            guessLettersCounter[guess[i][j] - 'A'] = guessLettersCounter[guess[i][j] - 'A'] + 1;
        }
    }

    for (int i = 0; i < 26; i = i + 1) {
        yellow = yellow + min(correctLettersCounter[i], guessLettersCounter[i]);
    }

    yellow = yellow - green;

    cout << green << "\n" << yellow << "\n";
}

int main() {
    // ifstream cin(".in");
    // ofstream cout(".out", ios::ate/app);

    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < 3; i = i + 1) {
        for (int j = 0; j < 3; j = j + 1) {
            cin >> correct[i][j];
        }
    }

    for (int i = 0; i < 3; i = i + 1) {
        for (int j = 0; j < 3; j = j + 1) {
            cin >> guess[i][j];
        }
    }

    solve(cin, cout);
}