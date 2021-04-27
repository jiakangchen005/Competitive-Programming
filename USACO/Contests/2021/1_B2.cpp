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

int n, odd, even;

/* Declaration */

void solve() {
    while (odd > even) {
        odd = odd - 2;
        even = even + 1;
    }

    if (even > odd + 1) {
        even = odd + 1;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    // eatFile("name");

    cin >> n;
    for (int x = 0; x < n; x = x + 1) {
        int temp;
        cin >> temp;
        if (temp % 2 == 0) {
            even = even + 1;
        } else {
            odd = odd + 1;
        }
    }

    solve();
    
    print(even + odd);
}
