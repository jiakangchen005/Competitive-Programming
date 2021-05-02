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
string s, t;

/* Declaration */

void solve() {
    if (s.length() != t.length()) {
        print("NO");
        return;
    }

    for (int x = 0; x < n; x = x + 1) {
        if (s.substr(x, 1) != t.substr(n - x - 1, 1)) {
            print("NO");
            return;
        }
    }

    print("YES");
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    // eatFile("name");

    cin >> s;
    cin >> t;

    n = min(s.length(), t.length());

    solve();
}
