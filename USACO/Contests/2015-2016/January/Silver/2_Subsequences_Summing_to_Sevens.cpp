#include <bits/stdc++.h>

using namespace std;

int n;

void solve(istream& cin, ostream& cout) {
    int IDs[n];

    for (int i = 0; i < n; i = i + 1) {
        cin >> IDs[i];
    }

    int first_occurrence[7], last_occurrence[7];

    fill(first_occurrence, first_occurrence + 7, 1000000 + 1);

    first_occurrence[0] = 0;

    long long sum = 0;

    for (int i = 0; i < n; i = i + 1) {
        sum = sum + IDs[i];

        int remainder = sum % 7;

        first_occurrence[remainder] = min(first_occurrence[remainder], i + 1);
        last_occurrence[remainder] = i + 1;
    }

    int largest_group = 0;

    for (int i = 0; i < 7; i = i + 1) {
        if (first_occurrence[i] <= n) {
            largest_group = max(largest_group, last_occurrence[i] - first_occurrence[i]);
        }
    }

    cout << largest_group << "\n";
}

int main() {
    ifstream cin("div7.in");
    ofstream cout("div7.out", ios::ate);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    solve(cin, cout);
}