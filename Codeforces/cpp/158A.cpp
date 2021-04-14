#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long

#define print(x) cout << x << "\n"
#define cinl getline
#define pb push_back

const ll MOD = 1000000007;

/* Declaration */

int n, k;

/* Declaration */

void solve() {
    int result, a[n];
    result = 0;
    
    for (int x = 0; x < n; x = x + 1) {
        cin >> a[x];
    }

    for (int x : a) {
        if ((x > 0) and (x >= a[k - 1])) {
            result = result + 1;
        }
    }
    print(result);
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    cin >> n;
    cin >> k;

    solve();
}
