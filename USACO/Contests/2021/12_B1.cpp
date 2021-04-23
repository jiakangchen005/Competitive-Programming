#include <bits/stdc++.h>

using namespace std;

#define sall(x) (x).begin(), (x).end()
#define print(x) cout << x << "\n"
#define all(x, n) x, x + n
#define cinl getline
#define pb push_back

// Type Condensation
typedef long double ld;
typedef long long ll;

// Constants
const ll MOD = 1000000007;
const int maxN = 0;

void eatFile(string x) {
    freopen((x + ".in").c_str(), "r", stdin); 
    freopen((x + ".out").c_str(),"w", stdout);
}

/* Declaration */

int a[7];

/* Declaration */

void solve() {
    sort(a, a + 7);
    cout << a[0] << " " << a[1] << " " << (a[6] - a[0] - a[1]) << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    // eatFile("name");

    for (int x = 0; x < 7; x = x + 1) {
        cin >> a[x];
    }

    solve();
}
