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

int shells[3] = {1, 2, 3};
int counter[3];

/* Declaration */

void solve() {    
    
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    eatFile("shell");

    int n;
    cin >> n;

    while (n--) {
    	int a, b, g;
    	cin >> a >> b >> g;
    	swap(shells[a - 1], shells[b - 1]);
    	counter[shells[g - 1] - 1] = counter[shells[g - 1] - 1] + 1;
    }
    
    print(max({counter[0], counter[1], counter[2]}));
}
