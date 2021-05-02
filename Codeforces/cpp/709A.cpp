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

int n, b, d;

/* Declaration */

void solve() {
    int waste = 0, result = 0;

    for (int x = 0; x < n; x = x + 1) {
        int temp;
        cin >> temp;
        if (temp <= b) {
            waste = waste + temp;
        }
        if (waste > d) {
            waste = 0;
            result = result + 1;
        }
    }

    print(result);
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    // eatFile("name");

    cin >> n >> b >> d;

    solve();
}
