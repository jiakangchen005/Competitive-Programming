#include <bits/stdc++.h>

using namespace std;

int N, M, R;

void solve(istream& cin, ostream& cout) {
    long long c[N];

    for (int i = 0; i < N; i = i + 1) {
        cin >> c[i];
    }

    sort(c, c + N, greater<long long>());

    pair<long long, long long> pq[M];

    for (int i = 0; i < M; i = i + 1) {
        cin >> pq[i].second >> pq[i].first;
    }

    sort(pq, pq + M, greater<pair<long long, long long>>());

    long long r[R];

    for (int i = 0; i < R; i = i + 1) {
        cin >> r[i];
    }

    sort(r, r + R, greater<long long>());

    long long milk_profits[N];

    fill(milk_profits, milk_profits + N, 0);

    for (int i = 0, j = 0; i < N; i = i + 1) {
        while ((c[i] > 0) && (j < M)) {
            long long gallons = min(c[i], pq[j].second);

            c[i] = c[i] - gallons;
            pq[j].second = pq[j].second - gallons;

            milk_profits[i] = milk_profits[i] + gallons * pq[j].first;

            if (pq[j].second == 0) {
                j = j + 1;
            }
        }
    }

    long long maximum_profits = 0;

    for (int i = N - 1, j = 0; i >= 0; i = i - 1) {
        maximum_profits = maximum_profits + milk_profits[i];

        if ((milk_profits[i] < r[j]) && (j < R)) {
            maximum_profits = maximum_profits - milk_profits[i];

            maximum_profits = maximum_profits + r[j];

            j = j + 1;
        }
    }

    cout << maximum_profits << "\n";
}

int main() {
    ifstream cin("rental.in");
    ofstream cout("rental.out", ios::ate);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M >> R;

    solve(cin, cout);
}