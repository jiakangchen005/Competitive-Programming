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
const int maxN = 0;

void eatFile(string x) {
    freopen((x + ".in").c_str(), "r", stdin); 
    freopen((x + ".out").c_str(),"w", stdout);
}

/* Declaration */

string s;
char letters[1001];
int total[26];

/* Declaration */

void solve() {
    int odds = 0;

    for (int x = 0; x < s.length(); x = x + 1) {
        total[letters[x] - 'a'] = total[letters[x] - 'a'] + 1;
    }

    for (int x = 0; x < 26; x = x + 1) {
        if (total[x] % 2 == 1) {
            odds = odds + 1;
        }
    }

    if ((odds % 2 == 0) && (odds != 0)) {
        print("Second");
    } else {
        print("First");
    }
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    // eatFile("name");

    cin >> s;
    toChar(s, letters);

    solve();
}
