#include <bits/stdc++.h>

using namespace std;

int N;

void solve(istream& cin, ostream& cout) {
    int A[N], sorted_A[N];

    for (int i = 0; i < N; i = i + 1) {
        cin >> A[i];

        sorted_A[i] = A[i];
    }

    sort(sorted_A, sorted_A + N);

    map<int, int> positions;

    positions[sorted_A[0]] = 0;

    for (int i = 1; i < N; i = i + 1) {
        if (sorted_A[i - 1] != sorted_A[i]) {
            positions[sorted_A[i]] = i;
        }
    }

    int moo = 0;

    for (int i = 0; i < N; i = i + 1) {
        moo = max(moo, i - positions[A[i]]);

        positions[A[i]] = positions[A[i]] + 1;
    }

    cout << moo + 1 << "\n";
}

int main() {
    ifstream cin("sort.in");
    ofstream cout("sort.out", ios::ate);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    solve(cin, cout);
}