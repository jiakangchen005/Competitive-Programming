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
    cout << s[0] << s.length() - 2 << s[s.length() - 1] << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int n;
    cin >> n;
    while (n--) {
        cin >> s;
        if (s.length() > 10) {
            solve();
        } else {
            print(s);
        }
    }
}
