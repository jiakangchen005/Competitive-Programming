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

struct Rectangle {
    int x1, y1, x2, y2;
    int area() {
        return ((x2 - x1) * (y2 - y1));
    }
};

Rectangle a, b, c;

/* Declaration */

int intersection(Rectangle a, Rectangle b) {
    int x = max(0, min(a.x2, b.x2) - max(a.x1, b.x1));
    int y = max(0, min(a.y2, b.y2) - max(a.y1, b.y1));
    return (x * y);
}

void solve() {
    int result = a.area() + b.area() - intersection(a, c) - intersection(b, c);
    cout << result << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    eatFile("billboard");
    
    cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
    cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
    cin >> c.x1 >> c.y1 >> c.x2 >> c.y2;

    solve();
}
