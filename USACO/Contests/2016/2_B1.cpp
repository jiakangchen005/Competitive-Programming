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

int x, y, m, result;

/* Declaration */

void solve() {
    int a, b = 1;

    while (true) {
        if (a * x > m) {
            break;
        }
        while (true) {
            int size = x * a + y * b;
            if ((size > result) && (size <= m)) {
                result = size;
            } else if (size > m) {
                b = 0;
                break;
            }
            b = b + 1;
        }
        a = a + 1;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    eatFile("pails");

    cin >> x >> y >> m;
    solve();
    print(result);
}
