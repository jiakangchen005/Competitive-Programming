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
    int temp = 1, result = 0;

    while (temp <= n) {
        for (int x = 1; x < 10; x = x + 1) {
            if (temp * x <= n) {
                result = result + 1;
            }
        }
        temp = temp * 10 + 1;
    }

    print(result);
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
