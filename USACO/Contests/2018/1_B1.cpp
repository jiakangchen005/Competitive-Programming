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

// Better to use an array to store the coordinates
int x[5], y[5];

// Check if point (x1, y1) is in billboard
bool inBillboard(int x1, int y1, int x2, int y2, int x3, int y3) {
    if ((x1 >= x2) && (x1 <= x3) && (y1 >= y2) && (y1 <= y3)) {
        return true;
    } else {
        return false;
    }
}

int getArea(int x1, int y1, int x2, int y2) {
    return abs(x2 - x1) * abs(y2 - y1);
}

// Get the visible area of the lawnmower billboard while being obscured by the cowfeed billboard
int getVisibleArea(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
    int result = getArea(x1, y1, x2, y2);

    int left = max(x1, x3);
    int right = min(x2, x4);
    int top = min(y2, y4);
    int bottom = max(y1, y3);

    if ((left < right) && (bottom < top)) {
        result = result - getArea(left, bottom, right, top);
    }

    return result;
}

/* Declaration */

void solve() {
    // Check if cow feed covers ALL of the lawnmower
    if ((x[1] >= x[3]) && (x[2] <= x[4]) && (y[1] >= y[3]) && (y[2] <= y[4])) {
        print(0);
        return;
    }

    // Get the amount of corners of the lawnmower billboard covered by the cowfeed billboard
    int cornersCovered = 0;

    if (inBillboard(x[1], y[1], x[3], y[3], x[4], y[4])) {
        cornersCovered = cornersCovered + 1;
    }

    if (inBillboard(x[1], y[2], x[3], y[3], x[4], y[4])) {
        cornersCovered = cornersCovered + 1;
    }

    if (inBillboard(x[2], y[1], x[3], y[3], x[4], y[4])) {
        cornersCovered = cornersCovered + 1;
    }

    if (inBillboard(x[2], y[2], x[3], y[3], x[4], y[4])) {
        cornersCovered = cornersCovered + 1;
    }

    if (cornersCovered <= 1) {
        print(getArea(x[1], y[1], x[2], y[2]));
    } else {
        print(getVisibleArea(x[1], y[1], x[2], y[2], x[3], y[3], x[4], y[4]));
    }
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    eatFile("billboard");

    cin >> x[1] >> y[1] >> x[2] >> y[2];
    cin >> x[3] >> y[3] >> x[4] >> y[4];

    solve();
}
