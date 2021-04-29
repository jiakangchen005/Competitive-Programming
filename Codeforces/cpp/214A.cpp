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

int n, m, result;

/* Declaration */

void solve() {
    result = 0;
    
    for (int x = 0; x <= 1000; x = x + 1) {
        for (int y = 0; y <= 1000; y = y + 1) {
            if ((x * x + y == n) && (x + y * y == m)) {
                result = result + 1;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    // eatFile("name");

    cin >> n >> m;
    
    solve();
    print(result);
}
