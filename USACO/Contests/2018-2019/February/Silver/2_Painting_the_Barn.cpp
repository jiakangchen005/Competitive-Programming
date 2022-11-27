#include <bits/stdc++.h>

using namespace std;

struct Coordinate {
    int x, y;
};

int n, k;

void solve(istream& cin, ostream& cout) {
    int barn_side[1000][1001];

    for (int i = 0; i < n; i = i + 1) {
        Coordinate lower_left, upper_right;

        cin >> lower_left.x >> lower_left.y >> upper_right.x >> upper_right.y;

        for (int j = lower_left.x; j < upper_right.x; j = j + 1) {
            barn_side[j][lower_left.y] = barn_side[j][lower_left.y] + 1;
            barn_side[j][upper_right.y] = barn_side[j][upper_right.y] - 1;
        }
    }

    int area = 0;

    for (int i = 0; i < 1000; i = i + 1) {
        for (int j = 0; j < 1000; j = j + 1) {
            if (barn_side[i][j] == k) {
                area = area + 1;
            }

            barn_side[i][j + 1] = barn_side[i][j + 1] + barn_side[i][j];
        }
    }

    cout << area << "\n";
}

int main() {
    ifstream cin("paintbarn.in");
    ofstream cout("paintbarn.out", ios::ate);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;

    solve(cin, cout);
}