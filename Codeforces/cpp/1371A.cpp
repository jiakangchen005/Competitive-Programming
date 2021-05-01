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
const int maxN = 0;

void eatFile(string x) {
    freopen((x + ".in").c_str(), "r", stdin); 
    freopen((x + ".out").c_str(),"w", stdout);
}

/* Declaration */

int n;

/* Declaration */

void solve() {
    if (n % 2 == 0) {
        print(n / 2);
    } else {
        print(n / 2 + 1);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    // eatFile("name");

    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        solve();
    }
}
