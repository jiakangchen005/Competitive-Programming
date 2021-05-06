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
string s;
 
/* Declaration */
 
void solve() {
    for (int x = 0; x < n; x = x + 1) {
        string temp = s.substr(x, 1);
        bool start = false;
        for (int y = 0; y < x; y = y + 1) {
            if (temp != s.substr(y, 1)) {
                if (start) {
                    print("NO");
                    return;
                }
            } else {
                start = true;
            }
        }
    }
    print("YES");
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
        cin >> s;
        solve();
    }
}
