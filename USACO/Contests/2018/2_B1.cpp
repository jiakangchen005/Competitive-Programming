#include <bits/stdc++.h>

using namespace std;

#define sall(x) (x).begin(), (x).end()
#define print(x) cout << x << "\n"
#define all(x, n) x, x + n
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

int a, b, x, y;

/* Declaration */

void solve() {
    int position = a;
    int result = 0;

    if (a > b) {
        swap(a, b);
    }

    if (x > y) {
        swap(x, y);
    }

    int ab = abs(a - b);
    int xy = abs(a - x) + abs(b - y);

    print(min(ab, xy));
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    eatFile("teleport");

    cin >> a >> b >> x >> y;

    solve();
}
