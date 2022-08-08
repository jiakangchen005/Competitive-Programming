/*
ID: jiakang3
TASK: ride
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

string comet, group;

void solve(istream& cin, ostream& cout) {
    int comet_number = 1, group_number = 1;

    for (int i = 0; i < comet.length(); i = i + 1) {
        comet_number = comet_number * ((int) (comet[i]) - 64);
    }

    for (int i = 0; i < group.length(); i = i + 1) {
        group_number = group_number * ((int) (group[i]) - 64);
    }

    if (comet_number % 47 == group_number % 47) {
        cout << "GO";
    } else {
        cout << "STAY";
    }

    cout << "\n";
}

int main() {
    ifstream cin("ride.in");
    ofstream cout("ride.out", ios::ate);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> comet >> group;

    solve(cin, cout);
}