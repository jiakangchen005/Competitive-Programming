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

int n, k, length;

/* Declaration */

void solve() {
    string a;
    cin >> a;

    if (length + a.length() > k) {
        cout << "\n" << a;
        length = a.length();
        return;
    } else if (length != 0) {
        cout << " " << a;
    } else {
        cout << a;
    }
    length = length + a.length();
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    eatFile("word");

    cin >> n >> k;

    while (n--) {
        solve();
    }
    print("");
}
