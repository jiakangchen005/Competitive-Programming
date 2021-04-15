#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long

#define print(x) cout << x << "\n"
#define cinl getline
#define pb push_back

const ll MOD = 1000000007;
const int maxA = 1e5;

/* Declaration */

int n, b, a[maxA];

/* Declaration */

void solve() {
    for (int x = 0; x < n; x = x + 1) {
        cin >> a[x];
    }

    sort(a, a + n);
    int result = 0;

    for (int x = 0; x < n; x = x + 1) {
        if (a[x] <= b) {
            b = b - a[x];
            result = result + 1;
        }
    }

    print(result);
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int t;
    cin >> t;
    for (int x = 1; x <= t; x = x + 1) {
        cin >> n >> b;
        cout << "Case #" << x << ": ";
        solve();
    }
}
