/*
ID: jiakang3
TASK: skidesign
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

int n;

void solve(istream& cin, ostream& cout) {
    int hills[n], result = pow(2, 31) - 1;

    for (int i = 0; i < n; i = i + 1) {
        cin >> hills[i];
    }

    for (int lowest = 0; lowest + 17 <= 100; lowest = lowest + 1) {
        int highest = lowest + 17, current = 0;
        for (int i = 0; i < n; i = i + 1) {
            if (hills[i] < lowest) {
                current = current + pow(lowest - hills[i], 2);
            } else if (hills[i] > highest) {
                current = current + pow(hills[i] - highest, 2);
            }
        }

        result = min(result, current);
    }

    cout << result << "\n";
}

int main() {
    ifstream cin("skidesign.in");
    ofstream cout("skidesign.out", ios::ate);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    solve(cin, cout);
}
