#include <bits/stdc++.h>
 
using namespace std;
 
#define ld long double
#define ll long long
 
#define print(x) cout << x << "\n"
#define cinl getline
#define pb push_back
 
const ll MOD = 1000000007;
const int maxN = 0;
 
/* Declaration */
 
int n;
 
/* Declaration */
 
void solve() {
    vector<int> a(n);
 
    for (int x = 0; x < n; x = x + 1) {
        cin >> a[x];
    }
 
    partition(a.begin(), a.end(), [&](const int x) {
        return x % 2;
    });
 
    for (int x = 0; x < a.size(); x = x + 1) {
        cout << a[x] << " ";
    }
 
    print("");
}
 
int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        solve();
    }
}
