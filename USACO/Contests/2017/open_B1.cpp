#include <bits/stdc++.h>

using namespace std;

// Type Condensation
#define ld long double
#define ll long long

#define print(x) cout << x << "\n"
#define cinl getline
#define pb push_back

// Constants
const ll MOD = 1000000007;
const int maxN = 0;

void eatFile(string x) {
    freopen((x + ".in").c_str(), "r", stdin); 
    freopen((x + ".out").c_str(),"w", stdout);
}

/* Declaration */

int x, y;

/* Declaration */

void solve() {
    int position, result, a, b;
    position = x;
    a = 1;
    b = 1;
    while (position != y) {
        int distance;
        if (b % 2 != 0) {
            result = result + abs(position - (x + a));
            for (int z = 0; z < x + a; z = z + 1) {
                position = x + a;
            }
        } else {
            result = result + abs(position - (x - a));
            position = x - a;
        }
        a = a * 2;
        b = b + 1;
    }
    print(result);
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    eatFile("lostcow");

    cin >> x >> y;
    solve();
}
