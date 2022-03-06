/*
ID: jiakang3
TASK: task
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

int n;

void solve(istream& cin, ostream& cout) {
    // a = element -> position
    // b = position -> element
    int a[n], b[n], result = 0;

    for (int i = 0; i < n; i = i + 1) {
        int a_i;
        cin >> a_i;

        a[a_i] = i;
    }

    for (int i = 0; i < n; i = i + 1) {
        int b_i;
        cin >> b_i;

        b[i] = b_i;
    }

    for (int i = 0; i < n; i = i + 1) {
        if (a[b[i]] > i) {
            result = result + 1;
        }
    }

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