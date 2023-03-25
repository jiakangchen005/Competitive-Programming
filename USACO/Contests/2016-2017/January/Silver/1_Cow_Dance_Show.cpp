#include <bits/stdc++.h>

using namespace std;

int N, T_max;

int time(int d[], int K) {
    priority_queue<int> stage;

    for (int i = 1; i <= K; i = i + 1) {
        stage.push(-1 * d[i]);
    }

    for (int i = K + 1; i <= N; i = i + 1) {
        stage.push(-1 * d[i] + stage.top());

        stage.pop();
    }

    int T = 0;

    while (!stage.empty()) {
        T = max(T, -1 * stage.top());

        stage.pop();
    }

    return T;
}

void solve(istream& cin, ostream& cout) {
    int d[N + 1];

    for (int i = 1; i <= N; i = i + 1) {
        cin >> d[i];
    }

    int K = N;

    int left = 1, right = N;

    while (left <= right) {
        int k = left + (right - left) / 2, T = time(d, k);

        if (T <= T_max) {
            K = min(K, k);

            right = k - 1;
        } else if (T > T_max) {
            left = k + 1;
        }
    }

    cout << K << "\n";
}

int main() {
    ifstream cin("cowdance.in");
    ofstream cout("cowdance.out", ios::ate);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> T_max;

    solve(cin, cout);
}