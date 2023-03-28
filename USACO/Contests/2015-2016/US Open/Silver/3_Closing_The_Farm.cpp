#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 3000;

int N, M;

vector<int> paths[MAX_N + 1], closing_order;

bool open[3001], visited[3001];

bool is_fully_connected(int n) {
    fill(visited + 1, visited + 3001, false);

    int starting_barn = closing_order[N - 1];

    queue<int> barns;

    barns.push(starting_barn);

    visited[starting_barn] = true;

    n = n + 1;

    while (!barns.empty()) {
        int barn = barns.front();

        barns.pop();

        for (int j = 0; j < paths[barn].size(); j = j + 1) {
            if (!visited[paths[barn][j]]) {
                if (open[paths[barn][j]]) {
                    barns.push(paths[barn][j]);

                    visited[paths[barn][j]] = true;

                    n = n + 1;
                }
            }

            if (n == N) {
                return true;
            }
        }
    }

    return false;
}

void solve(istream& cin, ostream& cout) {
    fill(open + 1, open + 3001, false);

    for (int i = 0; i < M; i = i + 1) {
        pair<int, int> path;

        cin >> path.first >> path.second;

        paths[path.first].push_back(path.second);
        paths[path.second].push_back(path.first);

        open[path.first] = true;
        open[path.second] = true;
    }

    for (int i = 0; i < N; i = i + 1) {
        int barn;
        cin >> barn;

        closing_order.push_back(barn);
    }

    for (int i = 0; i < N; i = i + 1) {
        if (is_fully_connected(i)) {
            cout << "YES";
        } else {
            cout << "NO";
        }

        cout << "\n";

        open[closing_order[i]] = false;
    }
}

int main() {
    ifstream cin("closing.in");
    ofstream cout("closing.out", ios::ate);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    solve(cin, cout);
}