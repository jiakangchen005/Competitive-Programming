#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long

#define print(x) cout << x << "\n"
#define cinl getline
#define pb push_back

const ll MOD = 1000000007;

/* Declaration */

int a[3];
int result;

/* Declaration */

void solve() {
    int temp = 0;
    for (int x : a) {
        if (x == 1) {
            temp = temp + 1;
        }
    }
    if (temp >= 2) {
        result = result + 1;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int n;
    cin >> n;
    while (n--) {
        cin >> a[0];
        cin >> a[1];
        cin >> a[2];
        solve();
    }
    print(result);
}
