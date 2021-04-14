#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long

#define print(x) cout << x << "\n"
#define cinl getline
#define pb push_back

const ll MOD = 1000000007;

/* Declaration */

string s;

/* Declaration */

void solve() {
	string first = "a" + s;
	string second = s + "a";
	
	for (int x = 0; x < s.length() + 1; x = x + 1) {
		if (first[x] != first[s.length() - x]) {
			print("YES");
			print(first);
			return;
		}
		if (second[x] != second[s.length() - x]) {
			print("YES");
			print(second);
			return;
		}
	}
	print("NO");
}

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		cin >> s;
		solve();
	}
}
