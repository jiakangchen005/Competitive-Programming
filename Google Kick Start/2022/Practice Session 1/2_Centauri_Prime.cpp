#include <bits/stdc++.h>

using namespace std;

string k;

char vowels[] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};

void solve() {
    char ending = k[k.length() - 1];

    if ((ending == 'Y') || (ending == 'y')) {
        cout << "nobody";
    } else {
        for (int i = 0; i < 10; i = i + 1) {
            if (ending == vowels[i]) {
                cout << "Alice";
                return;
            }
        }

        cout << "Bob";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    for (int i = 1; i <= t; i = i + 1) {
        cin >> k;

        cout << "Case #" << i << ": " << k << " is ruled by ";

        solve();

        cout << ".\n";
    }
}