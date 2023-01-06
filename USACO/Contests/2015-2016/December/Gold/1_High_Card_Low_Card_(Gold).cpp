#include <bits/stdc++.h>

using namespace std;

int N;

void solve(istream& cin, ostream& cout) {
    bool cards[2 * N + 1];

    fill(cards, cards + (2 * N + 1), false);

    vector<int> elsie_cards;

    for (int i = 0; i < N; i = i + 1) {
        int card;
        cin >> card;

        cards[card] = true;

        elsie_cards.push_back(card);
    }

    vector<pair<int, bool>> bessie_cards;

    for (int i = 1; i <= 2 * N; i = i + 1) {
        if (!cards[i]) {
            bessie_cards.push_back({i, true});
        }
    }

    vector<int> elsie[3];

    for (int i = 0; i < N / 2; i = i + 1) {
        elsie[1].push_back(elsie_cards[i]);
    }

    sort(elsie[1].begin(), elsie[1].end(), greater<int>());
    sort(bessie_cards.begin(), bessie_cards.end(), greater<pair<int, bool>>());

    int j = 0, points = 0;

    for (int i = 0; i < N / 2; i = i + 1) {
        while (j < N / 2) {
            if (bessie_cards[i].second) {
                if (elsie[1][i] < bessie_cards[j].first) {
                    bessie_cards[j].second = false;
                    points = points + 1;

                    j = j + 1;
                }

                break;
            }
        }
    }

    for (int i = N / 2; i < N; i = i + 1) {
        elsie[2].push_back(elsie_cards[i]);
    }

    sort(elsie[2].begin(), elsie[2].end());
    sort(bessie_cards.begin(), bessie_cards.end());

    j = 0;

    for (int i = 0; i < N / 2; i = i + 1) {
        while (j < N / 2) {
            if (bessie_cards[i].second) {
                if (elsie[2][i] > bessie_cards[j].first) {
                    bessie_cards[j].second = false;
                    points = points + 1;

                    j = j + 1;
                }

                break;
            }
        }
    }

    cout << points << "\n";
}

int main() {
    ifstream cin("cardgame.in");
    ofstream cout("cardgame.out", ios::ate);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    solve(cin, cout);
}