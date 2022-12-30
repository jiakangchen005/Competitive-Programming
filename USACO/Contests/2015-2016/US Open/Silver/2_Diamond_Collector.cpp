#include <bits/stdc++.h>

using namespace std;

int N, K;

void solve(istream& cin, ostream& cout) {
    int sizes[N];

    for (int i = 0; i < N; i = i + 1) {
        cin >> sizes[i];
    }

    sort(sizes, sizes + N);

    pair<int, int> case_max[N + 1];

    case_max[N] = {0, 0};
    
    for (int i = 0; i < N; i = i + 1) {
        int j = i;

        while ((j < N) && (sizes[j] - sizes[i] <= K)) {
            j = j + 1;
        }

        case_max[i].first = j - i;
    }

    for (int i = N - 1; i >= 0; i = i - 1) {
        case_max[i].second = max(case_max[i].first, case_max[i + 1].second);
    }

    int maximum_diamonds = 0;

    for (int i = 0; i < N; i = i + 1) {
        pair<int, int> cases;

        cases.first = case_max[i].first;
        cases.second = case_max[i + cases.first].second;

        maximum_diamonds = max(maximum_diamonds, cases.first + cases.second);
    }

    cout << maximum_diamonds << "\n";
}

int main() {
    ifstream cin("diamond.in");
    ofstream cout("diamond.out", ios::ate);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> K;

    solve(cin, cout);
}