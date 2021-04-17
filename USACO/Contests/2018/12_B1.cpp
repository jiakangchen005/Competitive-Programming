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

int capacity[3], buckets[3];

/* Declaration */

void solve(int x, int y) {
	int pour = min(buckets[x], capacity[y] - buckets[y]);

    buckets[x] = buckets[x] - pour;
    buckets[y] = buckets[y] + pour;
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    eatFile("mixmilk");

    cin >> capacity[0] >> buckets[0];
    cin >> capacity[1] >> buckets[1];
    cin >> capacity[2] >> buckets[2];

    for (int x = 0; x < 100; x = x + 1) {
    	solve(x % 3, (x + 1) % 3);
    }

    for (int x = 0; x < 3; x = x + 1) {
    	print(buckets[x]);
    }
}
