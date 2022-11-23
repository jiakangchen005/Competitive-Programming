#include <bits/stdc++.h>

using namespace std;

int dx[] = {-1, 0, 1, 0}, dy[] = {0, 1, 0, -1};

bool pasture[1001][1001];

int n;

bool is_valid(int x, int y) {
    return ((x >= 0) && (x <= 1000) && (y >= 0) && (y <= 1000));
}

int adjacent_cows(int x, int y) {
    int cows = 0;

    for (int i = 0; i < 4; i = i + 1) {
        if (is_valid(x + dx[i], y + dy[i])) {
            cows = cows + pasture[x + dx[i]][y + dy[i]];
        }
    }

    return cows;
}

void solve(istream& cin, ostream& cout) {
    int comfortable = 0;

    for (int i = 0; i < n; i = i + 1) {
        int x, y;
        cin >> x >> y;

        pasture[x][y] = true;

        comfortable = comfortable + (adjacent_cows(x, y) == 3);

        for (int j = 0; j < 4; j = j + 1) {
            if (is_valid(x + dx[j], y + dy[j])) {
                if (pasture[x + dx[j]][y + dy[j]]) {
                    comfortable = comfortable + (adjacent_cows(x + dx[j], y + dy[j]) == 3);
                    comfortable = comfortable - (adjacent_cows(x + dx[j], y + dy[j]) == 4);
                }
            }
        }

        cout << comfortable << "\n";
    }
}

int main() {
    // ifstream cin(".in");
    // ofstream cout(".out", ios::ate/app);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    solve(cin, cout);
}