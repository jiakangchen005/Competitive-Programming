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

int m, n, k;

/* Declaration */

void solve() {
    for (int x = 0; x < m; x = x + 1) {
    	string a;
    	cin >> a;

	    for (int y = 0; y < k; y = y + 1) {
	    	string result = "";
	    	for (int z = 0; z < n; z = z + 1) {
	    		for (int b = 0; b < k; b = b + 1) {
	    			result = result + a.substr(z, 1);
	    		}
	    	}
	    	print(result);
	    }
	}
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    eatFile("cowsignal");
    cin >> m >> n >> k;
    solve();
}
