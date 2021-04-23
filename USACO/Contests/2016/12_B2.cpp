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

int n, m, result;
int road[100];
int bessie[100];

/* Declaration */

void solve() {
    for (int x = 0; x < 100; x = x + 1) {
        result = max(result, bessie[x] - road[x]);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    eatFile("speeding");

    cin >> n >> m;

    int start;
    for (int x = 0; x < n; x = x + 1) {
        int segment, limit;
        cin >> segment >> limit;
        for (int y = start; y < start + segment; y = y + 1) {
            road[y] = limit;
        }
        start = start + segment;
    }

    start = 0;  
    for (int x = 0; x < m; x = x + 1) {
        int segment, speed;
        cin >> segment >> speed;
        for (int y = start; y < start + segment; y = y + 1) {
            bessie[y] = speed;
        }
        start = start + segment;
    }

    solve();
    print(result);
}
