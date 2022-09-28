#include <bits/stdc++.h>

using namespace std;

struct Room {
    int r;
};

int n;

void solve(istream& cin, ostream& cout) {
    Room rooms[n + 1];

    for (int i = 1; i <= n; i = i + 1) {
        cin >> rooms[i].r;
    }

    int answer = INT_MAX;

    for (int i = 1; i <= n; i = i + 1) {
        int distance = 0;

        for (int j = 1; j <= n; j = j + 1) {
            if (j < i) {
                distance = distance + rooms[j].r * (n - i + j);
            } else if (j > i) {
                distance = distance + rooms[j].r * (j - i);
            }
        }

        answer = min(answer, distance);
    }

    cout << answer << "\n";
}

int main() {
    ifstream cin("cbarn.in");
    ofstream cout("cbarn.out", ios::ate);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    solve(cin ,cout);
}