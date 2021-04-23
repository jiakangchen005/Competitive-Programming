#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long

#define print(x) cout << x << "\n"
#define cinl getline
#define pb push_back

const ll MOD = 1000000007;

void eatFile(string x) {
    freopen((x + ".in").c_str(), "r", stdin); 
    freopen((x + ".out").c_str(),"w", stdout);
}

/* Declaration */

int a, b, c, d;

/* Declaration */

void solve() {
    int result = b - a + d - c;
    result = result - max(0, min(b, d) - max(a, c));
    print(result);
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    eatFile("paint");

    cin >> a >> b >> c >> d;
    solve();
}
