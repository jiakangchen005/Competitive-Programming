#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long

#define print(x) cout << x << "\n"
#define cinl getline
#define pb push_back

const ll MOD = 1000000007;
const int maxN = 0;

void eatFile(string x) {
    freopen((x + ".in").c_str(), "r", stdin); 
    freopen((x + ".out").c_str(),"w", stdout);
}

/* Declaration */

int x1, y1, x2, y2, x3, y3, x4, y4;

/* Declaration */

void solve() {
    int topx = min(x1, x3);
    int topy = min(y1, y3);

    int lowerx = max(x2, x4);
    int lowery = max(y2, y4);

    int side1 = lowerx - topx;
    int side2 = lowery - topy;

    int side = max(side1, side2);

    print(side * side);
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    eatFile("square");

    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;
    solve();
}
