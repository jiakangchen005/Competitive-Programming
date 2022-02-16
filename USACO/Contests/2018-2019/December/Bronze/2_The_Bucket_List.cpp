/*
ID: jiakang3
TASK: task
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

int n;
const int MAX_ST = 1e3 + 3;
int times[MAX_ST];

void solve(istream& cin, ostream& cout) {
    int result = 0;

    for (int x = 0; x < n; x = x + 1) {
        int s, t, b;
        cin >> s >> t >> b;

        for (int y = s; y <= t; y = y + 1) {
            times[y] = times[y] + b;
        }
    }

    for (int x = 1; x <= 1000; x = x + 1) {
        result = max(result, times[x]);
    }

    cout << result << "\n";
}

int main() {
    ifstream cin("blist.in");
    ofstream cout("blist.out", ios::ate);

    ios::sync_with_stdio(0);
    cin.tie(0);

    memset(times, 0, MAX_ST);

    cin >> n;

    solve(cin, cout);
}