#include <bits/stdc++.h>

using namespace std;

int N;

void solve(istream& cin, ostream& cout) {
    int w[N];

    for (int i = 0; i < N; i = i + 1) {
        cin >> w[i];
    }

    sort(w, w + N, greater<int>());

    vector<int> line;

    for (int i = 0; i < N; i = i + 1) {
        if (w[i] >= line.size()) {
            line.push_back(w[i]);
        }
    }

    cout << line.size() << "\n";
}

int main() {
    ifstream cin("lemonade.in");
    ofstream cout("lemonade.out", ios::ate);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    solve(cin, cout);
}