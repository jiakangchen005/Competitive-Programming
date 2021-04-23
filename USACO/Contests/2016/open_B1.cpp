#include <bits/stdc++.h>

using namespace std;

#define print(x) cout << x << "\n"
#define cinl getline
#define pb push_back

// Type Condensation
typedef long double ld;
typedef long long ll;

// Constants
const ll MOD = 1000000007;
const int maxN = 1000;

void eatFile(string x) {
    freopen((x + ".in").c_str(), "r", stdin); 
    freopen((x + ".out").c_str(),"w", stdout);
}

/* Declaration */

int n, k, result, a[maxN];

/* Declaration */

void solve() {
    sort(a, a + n);

    for (int x = 0; x < n; x = x + 1) {
        int temp = 1;
        for (int y = x + 1; y < n; y = y + 1) {
            if (a[y] - a[x] <= k) {
                temp = temp + 1;
            } else {
                break;
            }
        }
        result = max(result, temp);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    eatFile("diamond");

    cin >> n >> k;

    for (int x = 0; x < n; x = x + 1) {
        cin >> a[x];
    }

    solve();
    print(result);
}
