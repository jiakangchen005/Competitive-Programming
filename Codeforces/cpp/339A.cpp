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

string s;

/* Declaration */

void solve() {
    int result[200];
    int n = 0;

    for (int x = 0, y = 0; x < s.length(); x = x + 2) {
        result[y] = stoi(s.substr(x, 1));
        n = n + 1;
        y = y + 1;
    }

    sort(result, result + n);

    for (int x = 0; x < n; x = x + 1) {
        if (x != n - 1) {
            cout << result[x] << "+";
        } else {
            print(result[x]);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    // eatFile("name");

    cin >> s;
    solve();
}
