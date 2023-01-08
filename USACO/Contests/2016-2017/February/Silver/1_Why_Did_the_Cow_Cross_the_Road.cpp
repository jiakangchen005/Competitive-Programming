#include <bits/stdc++.h>

using namespace std;

int C, N;

void solve(istream& cin, ostream& cout) {
    multiset<int> T;

    for (int i = 0; i < C; i = i + 1) {
        int chicken;
        cin >> chicken;

        T.insert(chicken);
    }

    pair<int, int> cows[N];

    for (int i = 0; i < N; i = i + 1) {
        cin >> cows[i].second >> cows[i].first;
    }

    sort(cows, cows + N);

    for (int i = 0; i < N; i = i + 1) {
        swap(cows[i].first, cows[i].second);
    }

    int cow_chicken_pairs = 0;

    for (int i = 0; i < N; i = i + 1) {
        auto chicken = T.lower_bound(cows[i].first);

        if ((cows[i].first <= *chicken) && (*chicken <= cows[i].second)) {
            cow_chicken_pairs = cow_chicken_pairs + 1;

            T.erase(chicken);
        }
    }

    cout << cow_chicken_pairs << "\n";
}

int main() {
    ifstream cin("helpcross.in");
    ofstream cout("helpcross.out", ios::ate);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> C >> N;

    solve(cin, cout);
}