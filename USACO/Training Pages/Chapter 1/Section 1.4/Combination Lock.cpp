/*
ID: jiakang3
TASK: combo
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

int n;

struct Combination {
    int a, b, c;

    bool check(int first, int second) {
        return ((abs(first - second) <= 2) || (abs(first - second) >= n - 2));
    }

    bool unlock(int x, int y, int z) {
        return (check(a, x) && check(b, y) && check(c, z));
    }
};

Combination john, master;

void solve(istream& cin, ostream& cout) {
    int result = 0;

    for (int x = 1; x <= n; x = x + 1) {
        for (int y = 1; y <= n; y = y + 1) {
            for (int z = 1; z <= n; z = z + 1) {
                if (john.unlock(x, y, z) || master.unlock(x, y, z)) {
                    result = result + 1;
                }
            }
        }
    }

    cout << result << "\n";
}

int main() {
    ifstream cin("combo.in");
    ofstream cout("combo.out", ios::ate);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    cin >> john.a >> john.b >> john.c;
    cin >> master.a >> master.b >> master.c;

    solve(cin, cout);
}