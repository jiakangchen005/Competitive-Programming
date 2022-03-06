/*
ID: jiakang3
TASK: task
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

int n;

string blocks[4];

bool check(string word, string combination[]) {
    bool result = true;

    for (int i = 0; i < word.length(); i = i + 1) {
        if (combination[i].find(word[i]) == string::npos) {
            result = false;
            break;
        }
    }

    return result;
}

void solve(istream& cin, ostream& cout) {
    for (int i = 0; i < n; i = i + 1) {
        string word;
        cin >> word;

        for (int a = 0; a < 4; a = a + 1) {
            for (int b = 0; b < 4; b = b + 1) {
                for (int c = 0; c < 4; c = c + 1) {
                    for (int d = 0; d < 4; d = d + 1) {
                        set<int> set;

                        set.insert(a);
                        set.insert(b);
                        set.insert(c);
                        set.insert(d);

                        if (set.size() == 4) {
                            string combination[4];

                            combination[0] = blocks[a];
                            combination[1] = blocks[b];
                            combination[2] = blocks[c];
                            combination[3] = blocks[d];

                            if (check(word, combination)) {
                                cout << "YES";
                                goto exit;
                            }
                        }
                    }
                }
            }
        }

        cout << "NO";

        exit:

        cout << "\n";
    }
}

int main() {
    // ifstream cin(".in");
    // ofstream cout(".out", ios::ate/app);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 0; i < 4; i = i + 1) {
        cin >> blocks[i];
    }

    solve(cin, cout);
}