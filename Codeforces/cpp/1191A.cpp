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

int x;

/* Declaration */

void solve() {
    int temp = x % 4;

    if (temp == 0) {
        print("1 A");
    } else if (temp == 1) {
        print("0 A");
    } else if (temp == 2) {
        print("1 B");
    } else if (temp == 3) {
        print("2 A");
    }
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    // eatFile("name");

    cin >> x;
    solve();
}
