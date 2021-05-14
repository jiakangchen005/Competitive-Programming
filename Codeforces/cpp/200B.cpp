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
/* Declaration */

void solve() {
    ;
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    // eatFile("name");

    int n;
    cin >> n;

    double sum = 0;

    for (int x = 0; x < n; x = x + 1) {
    	int temp;
    	cin >> temp;
    	sum = sum + temp;
    }

    sum = sum / n;

   	print(sum);
}
