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

int x[4];

/* Declaration */

void solve() {
    sort(x, x + 4);
    cout << x[3] - x[0] << " " << x[3] - x[1] << " " << x[3] - x[2] << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    // eatFile("name");

    for (int y = 0; y < 4; y = y + 1) {
        cin >> x[y];
    }

    solve();
}
