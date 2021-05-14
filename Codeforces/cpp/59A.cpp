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
    int lower = 0, upper = 0;

    for (int x = 0; x < s.length(); x = x + 1) {
    	char temp = s[x];

    	if (tolower(temp) == temp) {
    		lower = lower + 1;
    	} else {
    		upper = upper + 1;
    	}
    }

    if (lower >= upper) {
    	for (int x = 0; x < s.length(); x = x + 1) {
    		char temp = tolower(s[x]);
    		cout << temp;
    	}
    } else {
    	for (int x = 0; x < s.length(); x = x + 1) {
    		char temp = toupper(s[x]);
    		cout << temp;
    	}
    }
    print("");
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    // eatFile("name");

    cin >> s;
    solve();
}
