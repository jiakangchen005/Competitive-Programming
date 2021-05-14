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
	
	bool first;

	if (tolower(s[0]) == s[0]) {
		first = true;
	} else {
		first = false;
	}

	bool second = true;

	for (int x = 1; x < s.length(); x = x + 1) {
		if (toupper(s[x]) != s[x]) {
			second = false;
			break;
		}
	}

	if (second) {
		char temp;
		
		if (first) {
			temp = toupper(s[0]);
			cout << temp;
		} else {
			temp = tolower(s[0]);
			cout << temp;
		}
		
		for (int x = 1; x < s.length(); x = x + 1) {
			temp = tolower(s[x]);
			cout << temp;
		}
		print("");
	} else {
		print(s);
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
