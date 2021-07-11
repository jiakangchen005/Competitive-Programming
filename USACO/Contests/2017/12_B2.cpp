#include <bits/stdc++.h>

using namespace std;

#define toChar(a, b) strcpy(b, a.c_str())
#define print(x) cout << x << "\n"

// Constants
const long long MOD = 1000000007;

void eatFile(string x) {
    freopen((x + ".in").c_str(), "r", stdin); 
    freopen((x + ".out").c_str(),"w", stdout);
}

/* Declaration */

int n;

/* Declaration */

void solve() {
    int position[n], ids[n], result[n];

    for (int x = 0; x < n; x = x + 1) {
        cin >> position[x];
    }

    for (int x = 0; x < n; x = x + 1) {
        cin >> ids[x];
    }

    // Here is the confusing part...

    // A forward shuffle is: 
    // result[position[x] - 1] = ids[x];

    // So a backwards shuffle would be:
    // result[x] = ids[position[x] - 1];

    // Reversing the shuffle 3 times will reveal the orginal order
    for (int times = 0; times < 3; times = times + 1) {
        for (int x = 0; x < n; x = x + 1) {
            result[x] = ids[position[x] - 1];
        }

        for (int x = 0; x < n; x = x + 1) {
            ids[x] = result[x];
        }
    }

    for (int x = 0; x < n; x = x + 1) {
        print(result[x]);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    eatFile("shuffle");

    cin >> n;

    solve();
}
