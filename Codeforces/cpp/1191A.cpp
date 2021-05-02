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

int p[4] = {1, 4, 2, 3};
char c[4] = {'D', 'A', 'C', 'B'};

/* Declaration */

void solve() {
    int position = x % 4;
    int result = 0;

    if (p[position] < p[(x + 1) % 4]) {
        position = (x + 1) % 4;
        result = 1;
    }
    if (p[position] < p[(x + 2) % 4]) {
        position = (x + 2) % 4;
        result = 2;
    }
    cout << result << " " << c[position] << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    // eatFile("name");

    cin >> x;
    solve();
}
