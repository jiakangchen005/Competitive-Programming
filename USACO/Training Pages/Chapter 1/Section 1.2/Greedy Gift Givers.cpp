/*
ID: jiakang3
TASK: gift1
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

int np;

map<string, int> friends_money;

void solve(istream& cin, ostream& cout) {
    string friends[np];

    for (int i = 0; i < np; i = i + 1) {
        cin >> friends[i];

        friends_money.insert({friends[i], 0});
    }

    string name;
    int money, gifts;

    for (int i = 0; i < np; i = i + 1) {
        cin >> name;
        cin >> money >> gifts;

        if (gifts) {
            friends_money[name] = friends_money[name] - money + (money % gifts);

            string recipient;

            for (int j = 0; j < gifts; j = j + 1) {
                cin >> recipient;

                friends_money[recipient] = friends_money[recipient] + (money / gifts);
            }
        }
    }

    for (int i = 0; i < np; i = i + 1) {
        cout << friends[i] << " " << friends_money[friends[i]] << "\n";
    }
}

int main() {
    ifstream cin("gift1.in");
    ofstream cout("gift1.out", ios::ate);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> np;

    solve(cin, cout);
}