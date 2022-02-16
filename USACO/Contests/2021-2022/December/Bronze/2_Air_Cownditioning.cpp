/*
ID: jiakang3
TASK: task
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

int n;

void solve(istream& cin, ostream& cout) {
    int p[n + 1], t[n + 1], change[n + 3], result = 0;

    memset(change, 0, sizeof(change));

    for (int i = 1; i <= n; i = i + 1) {
        cin >> p[i];
    }

    for (int i = 1; i <= n; i = i + 1) {
        cin >> t[i];
    }

    for (int i = 1; i <= n; i = i + 1) {
        change[i + 1] = p[i] - t[i];
    }

    for (int i = 1; i <= n + 1; i = i + 1) {
        result = result + abs(change[i] - change[i + 1]);
    }

    result = result / 2;

    cout << result << "\n";
}

int main() {
    // ifstream cin(".in");
    // ofstream cout(".out", ios::ate/app);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    solve(cin, cout);
}