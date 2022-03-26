/*
ID: jiakang3
TASK: task
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

int numbers[7];

void solve(istream& cin, ostream& cout) {
    sort(numbers, numbers + 7);

    cout << numbers[0] << " " << numbers[1] << " " << numbers[6] - (numbers[0] + numbers[1]) << "\n";
}

int main() {
    // ifstream cin(".in");
    // ofstream cout(".out", ios::ate/app);

    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < 7; i = i + 1) {
        cin >> numbers[i];
    }

    solve(cin, cout);
}