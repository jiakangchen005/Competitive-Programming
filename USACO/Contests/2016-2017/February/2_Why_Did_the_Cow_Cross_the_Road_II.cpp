#include <bits/stdc++.h>

using namespace std;

int n, k, b;

void solve(istream& cin, ostream& cout) {
    bool signals[n + 1];

    fill(signals, signals + n + 1, true);

    for (int i = 0; i < b; i = i + 1) {
        int broken;
        cin >> broken;

        signals[broken] = false;
    }

    pair<int, int> prefix_sums[n + 1];

    prefix_sums[0] = {0, 0};

    for (int i = 1; i <= n; i = i + 1) {
        prefix_sums[i] = prefix_sums[i - 1];

        prefix_sums[i].first = prefix_sums[i].first + signals[i];
        prefix_sums[i].second = prefix_sums[i].second + !signals[i];
    }

    int minimum_repairs = n + 1;

    for (int i = k; i <= n; i = i + 1) {
        int repairs = prefix_sums[i].second - prefix_sums[i - k].second;

        minimum_repairs = min(minimum_repairs, repairs);
    }

    cout << minimum_repairs << "\n";
}

int main() {
    ifstream cin("maxcross.in");
    ofstream cout("maxcross.out", ios::ate);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k >> b;

    solve(cin, cout);
}