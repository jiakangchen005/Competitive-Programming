#include <bits/stdc++.h>
 
using namespace std;
 
// Type Condensation
#define ld long double
#define ll long long
 
#define print(x) cout << x << "\n"
#define cinl getline
#define pb push_back
 
// Constants
const ll MOD = 1000000007;
const int maxN = 100;
 
void eatFile(string x) {
    freopen((x + ".in").c_str(), "r", stdin); 
    freopen((x + ".out").c_str(),"w", stdout);
}
 
/* Declaration */
 
int n;
ld result;
 
/* Declaration */
 
void solve() {
    bool yes = false;
    cin >> n;
    for (int x = 0; x < n; x = x + 1) {
        int y;
        cin >> y;
        int z = sqrt(y);
        if ((z * z != y) and !(yes)) {
            print("YES");
            yes = true;
        }
    }
    if (!yes) {
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
        solve();
    }
}
