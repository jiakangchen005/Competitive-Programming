#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long

#define print(x) cout << x << "\n"
#define cinl getline
#define pb push_back

const ll MOD = 1000000007;

/* Declaration */

string a;

/* Declaration */

void solve() {
    if (a.length() % 2 == 0) {
        print("CHAT WITH HER!");
    } else {
        print("IGNORE HIM!");
    }
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    cin >> a;
    
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());
    
    solve();
}
