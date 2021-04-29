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
 
int n, m, k;
 
/* Declaration */
 
void solve() {
    int temp = (n - 1) + (m - 1) * n;
 
    if (temp == k) {
        print("YES");
    } else {
        print("NO");
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
        cin >> n >> m >> k;
        solve();
    }
}
