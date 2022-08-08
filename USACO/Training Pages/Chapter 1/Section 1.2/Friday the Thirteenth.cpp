/*
ID: jiakang3
TASK: friday
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

int number_of_days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int n, frequencies[] = {0, 0, 0, 0, 0, 0, 0};

bool isLeapYear(int year) {
    return (((year % 100) && (year % 4 == 0)) || (year % 400 == 0));
}

void solve(istream& cin, ostream& cout) {
    int current_day = 5;

    for (int year = 1900; year <= 1900 + n - 1; year = year + 1) {
        for (int month = 1; month <= 12; month = month + 1) {
            frequencies[current_day] = frequencies[current_day] + 1;

            if ((month == 2) && isLeapYear(year)) {
                current_day = current_day + 29 % 7;
            } else {
                current_day = current_day + number_of_days[month] % 7;
            }

            current_day = current_day % 7;
        }
    }

    cout << frequencies[5] << " " << frequencies[6];

    for (int i = 0; i < 5; i = i + 1) {
        cout << " " << frequencies[i];
    }

    cout << "\n";
}

int main() {
    ifstream cin("friday.in");
    ofstream cout("friday.out", ios::ate);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    solve(cin, cout);
}