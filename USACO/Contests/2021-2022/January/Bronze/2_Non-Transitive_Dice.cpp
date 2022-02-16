/*
ID: jiakang3
TASK: task
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

struct Die {
    int sides[4];

    bool canBeat(Die opponent) {
        int score = 0;

        for (int i = 0; i < 4; i = i + 1) {
            for (int j = 0; j < 4; j = j + 1) {
                if (sides[i] > opponent.sides[j]) {
                    score = score + 1;
                } else if (sides[i] < opponent.sides[j]) {
                    score = score - 1;
                }
            }
        }

        return (score > 0);
    } 
};

Die A, B;

void solve(istream& cin, ostream& cout) {
    for (int a = 1; a <= 10; a = a + 1) {
        for (int b = 1; b <= 10; b = b + 1) {
            for (int c = 1; c <= 10; c = c + 1) {
                for (int d = 1; d <= 10; d = d + 1) {
                    Die C;
                    C.sides[0] = a;
                    C.sides[1] = b;
                    C.sides[2] = c;
                    C.sides[3] = d;

                    if ((A.canBeat(B) && B.canBeat(C) && C.canBeat(A)) || (A.canBeat(C) && C.canBeat(B) && B.canBeat(A))) {
                        cout << "yes\n";
                        return;
                    }
                }
            }
        }
    }

    cout << "no\n";
}

int main() {
    // ifstream cin(".in");
    // ofstream cout(".out", ios::ate/app);

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        for (int i = 0; i < 4; i = i + 1) {
            cin >> A.sides[i];
        }

        for (int i = 0; i < 4; i = i + 1) {
            cin >> B.sides[i];
        }

        solve(cin, cout);
    }
}