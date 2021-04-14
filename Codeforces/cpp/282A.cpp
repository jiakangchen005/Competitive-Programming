#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long

#define print(x) cout << x << "\n"
#define cinl getline
#define pb push_back

const ll MOD = 1000000007;

/* Declaration */

int result;

/* Declaration */

void solve() {
    string a;
    cin >> a;

    if (a.find("+") != string::npos) {
        result = result + 1;
    } else if (a.find("-") != string::npos) {
        result = result - 1;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int n;
    cin >> n;
    result = 0;

    while (n--) {
        solve();
    }

    print(result);
}
