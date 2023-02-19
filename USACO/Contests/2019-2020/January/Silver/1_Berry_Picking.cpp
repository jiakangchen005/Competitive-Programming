#include <bits/stdc++.h>

using namespace std;

int N, K;

void solve(istream& cin, ostream& cout) {
    int B[N];

    int maximum = 0;

    for (int i = 0; i < N; i = i + 1) {
        cin >> B[i];

        maximum = max(maximum, B[i]);
    }

    sort(B, B + N, greater<int>());

    int bessie = 0;

    for (; maximum > 0; maximum = maximum - 1) {
        int trees[N];

        vector<int> baskets;

        copy(B, B + N, trees);

        for (int i = 0; i < min(N, K); i = i + 1) {
            while (trees[i] - maximum >= 0) {
                baskets.push_back(maximum);
                trees[i] = trees[i] - maximum;
            }
        }

        sort(trees, trees + N, greater<int>());

        for (int i = 0; baskets.size() < K; i = i + 1) {
            if (i < N) {
                baskets.push_back(trees[i]);
            } else {
                baskets.push_back(0);
            }
        }

        int berries = 0;

        for (int i = K / 2; i < K; i = i + 1) {
            berries = berries + baskets[i];
        }

        bessie = max(bessie, berries);
    }

    cout << bessie << "\n";
}

int main() {
    ifstream cin("berries.in");
    ofstream cout("berries.out", ios::ate);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> K;

    solve(cin, cout);
}