/*
ID: jiakang3
TASK: crypt1
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

bool digits[10];
int n;

bool isValid(string temp) {
    for (int x = 0; x < temp.length(); x = x + 1) {
        if (!digits[temp[x] - '0']) {
            return false;
        }
    }

    return true;
}

void solve(istream& cin, ostream& cout) {
    int result = 0;

    for (int x = 111; x <= 999; x = x + 1) {
        if (isValid(to_string(x))) {
            for (int y = 11; y <= 99; y = y + 1) {
                if (isValid(to_string(y))) {
                    if (isValid(to_string(x * y))) {
                        string dx = to_string(y / 10 * x), ex = to_string(y % 10 * x);
                        
                        if ((dx.length() == 3) && (dx.length() == ex.length())) {
                            if (isValid(dx) && isValid(ex)) {
                                result = result + 1;
                            }
                        }
                    }
                }
            }
        }
        
    }

    cout << result << "\n";
}

int main() {
    ifstream cin("crypt1.in");
    ofstream cout("crypt1.out", ios::ate);

    ios::sync_with_stdio(0);
    cin.tie(0);

    memset(digits, false, 10);

    cin >> n;

    for (int x = 0; x < n; x = x + 1) {
        int temp;
        cin >> temp;
        digits[temp] = true;
    }

    solve(cin, cout);
}