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
const int maxN = 200;

void eatFile(string x) {
    freopen((x + ".in").c_str(), "r", stdin); 
    freopen((x + ".out").c_str(),"w", stdout);
}

/* Declaration */

int n, a[maxN], b[maxN];
ll result;

/* Declaration */

void solve() {
    int possible[n] = {0};

    for (int x = 0; x < n; x = x + 1) {
        for (int y = 0; y < n; y = y + 1) {
            if (a[x] <= b[y]) {
                possible[x] = possible[x] + 1;
            }
        }
    }

    result = 1;

    for (int x = n - 1; x >= 0; x = x - 1) {
        result = result * (possible[x] - (n - x - 1));
    }
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    // eatFile("name");

    cin >> n;
    
    for (int x = 0; x < n; x = x + 1) {
        cin >> a[x];
    }

    for (int x = 0; x < n; x = x + 1) {
        cin >> b[x];
    }

    sort(a, a + n);
    sort(b, b + n);

    solve();

    print(result);
}
