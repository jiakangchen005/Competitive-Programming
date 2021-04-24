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
const int maxN = 100;

void eatFile(string x) {
    freopen((x + ".in").c_str(), "r", stdin); 
    freopen((x + ".out").c_str(),"w", stdout);
}

/* Declaration */

int n, result, p[maxN];

/* Declaration */

void solve() {
    for (int x = 0; x < n; x = x + 1) {
        for (int y = x; y < n; y = y + 1) {
            int total = 0;
            
            for (int z = x; z <= y; z = z + 1) {
                total = total + p[z];
            }
            
            for (int z = x; z <= y; z = z + 1) {
                if (p[z] * (y - x + 1) == total) {
                    result = result + 1;
                    break;
                }
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    // eatFile("name");

    cin >> n;

    for (int x = 0; x < n; x = x + 1) {
        cin >> p[x];
    }

    solve();
    print(result);
}
