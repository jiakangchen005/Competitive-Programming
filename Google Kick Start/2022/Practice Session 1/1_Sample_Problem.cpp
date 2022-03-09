#include <bits/stdc++.h>

using namespace std;

int n, m;

void solve() {
    int sum = 0;

    for (int i = 0; i < n; i = i + 1) {
        int c;
        cin >> c;

        sum = sum + c;
    }

    cout << sum % m << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    for (int i = 1; i <= t; i = i + 1) {
        cin >> n >> m;

        cout << "Case #" << i << ": ";
        
        solve();
    }
}