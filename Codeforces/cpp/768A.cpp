#include <bits/stdc++.h>

using namespace std;

#define toChar(a, b) strcpy(b, a.c_str())
#define print(x) cout << x << "\n"
#define cinl getline
#define pb push_back

// Type Condensation
typedef long double ld;
typedef long long ll;

// Constants
const ll MOD = 1000000007;

void eatFile(string x) {
    freopen((x + ".in").c_str(), "r", stdin); 
    freopen((x + ".out").c_str(),"w", stdout);
}

/* Declaration */

int n;

/* Declaration */

void solve() {
    int s = 1e9 + 1, l = -1;
    int a[n];

    for (int x = 0; x < n; x = x + 1) {
        cin >> a[x];
        s = min(s, a[x]);
        l = max(l, a[x]);
    }
    
    int result = (n - count(a, a + n, s) - count(a, a + n, l));

    if (result < 0) {
        print(0);
    } else {
        print(result);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    // eatFile("name");

    cin >> n;
    solve();
}
