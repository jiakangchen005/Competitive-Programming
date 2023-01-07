#include <bits/stdc++.h>

using namespace std;

int N;

void solve(istream& cin, ostream& cout) {
    bool cards[2 * N + 1];

    fill(cards, cards + (2 * N + 1), false);

    for (int i = 0; i < N; i = i + 1) {
        int card;
        cin >> card;

        cards[card] = true;
    }

    vector<int> elsie, bessie;

    for (int i = 1; i <= 2 * N; i = i + 1) {
        if (cards[i]) {
            elsie.push_back(i);
        } else {
            bessie.push_back(i);
        }
    }

    int j = -1, points = 0;

    for (int i = 0; i < N; i = i + 1) {
        while (j + 1 < N) {
            j = j + 1;

            if (elsie[i] < bessie[j]) {
                points = points + 1;
                break;
            }
        }
    }

    cout << points << "\n";
}

int main() {
    ifstream cin("highcard.in");
    ofstream cout("highcard.out", ios::ate);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    solve(cin, cout);
}