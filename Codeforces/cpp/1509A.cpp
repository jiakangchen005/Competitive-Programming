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
    vector<int> a;
    int even[n];
    int evens = 0;
 
    for (int x = 0; x < n; x = x + 1) {
        int temp;
        cin >> temp;
        if (temp % 2 == 0) {
            even[evens] = temp;
            evens = evens + 1;
        } else {
            a.pb(temp);
        }
    }
 
    for (int x = 0; x < evens; x = x + 1) {
        a.pb(even[x]);
    }
 
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
    return 0;
}
