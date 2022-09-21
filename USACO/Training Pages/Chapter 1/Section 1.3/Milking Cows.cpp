/*
ID: jiakang3
TASK: milk2
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

int n;
bool times[1000000];

void solve(istream& cin, ostream& cout) {
    int lower = 1000001, upper = -1;

    memset(times, false, 1000000);

    for (int i = 0; i < n; i = i + 1) {
        int begin, end;

        cin >> begin >> end;

        lower = min(lower, begin);
        upper = max(upper, end);

        for (int i = begin; i < end; i = i + 1) {
            times[i] = true;
        }
    }

    pair<int, int> answer = {0, 0}, temp = {0, 0};
    bool current = true;

    for (int i = lower; i < upper; i = i + 1) {
        if (times[i] && current) {
            temp.first = temp.first + 1;
        } else if (!times[i] && !current) {
            temp.second = temp.second + 1;
        } else {
            answer = {max(answer.first, temp.first), max(answer.second, temp.second)};

            current = times[i];

            temp = {0, 0};

            i = i - 1;
        }

        answer = {max(answer.first, temp.first), max(answer.second, temp.second)};
    }

    cout << answer.first << " " << answer.second << "\n";
}

int main() {
    ifstream cin("milk2.in");
    ofstream cout("milk2.out", ios::ate);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    solve(cin, cout);
}