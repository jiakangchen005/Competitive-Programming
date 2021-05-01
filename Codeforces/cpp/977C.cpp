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
const int maxN = 0;

void eatFile(string x) {
    freopen((x + ".in").c_str(), "r", stdin); 
    freopen((x + ".out").c_str(),"w", stdout);
}

/* Declaration */

int n, k;

/* Declaration */

void solve() {
    int temp, a[n];
    
    for (int x = 0; x < n; x = x + 1) {
        cin >> a[x];
    }

    sort(a, a + n);

    if (k == 0) {
        if (a[0] - 1 <= 0) {
            print(-1);
        } else {
            print(a[0] - 1);
        }
        return;
    }
    
    temp = a[k - 1];
    
    if (k < n) {
        if (a[k] == temp) {
            print(-1);
            return;
        }
    }
    
    print(temp);
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    // eatFile("name");

    cin >> n >> k;

    solve();
}
