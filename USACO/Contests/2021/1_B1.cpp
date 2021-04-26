#include <bits/stdc++.h>

using namespace std;

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

string cowphabet, word;
int result;

/* Declaration */

void solve() {
    result = 1;

    for (int x = 0; x < word.length() - 1; x = x + 1) {
        int a = cowphabet.find(word.substr(x + 1, 1));
        int b = cowphabet.find(word.substr(x, 1));
        
        if (a <= b) {
            result = result + 1;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    // eatFile("name");
    cin >> cowphabet;
    cin >> word;

    solve();

    print(result);
}
