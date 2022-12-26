#include <bits/stdc++.h>

using namespace std;

int N;

int f(int x, pair<int, int> peak) {
    return -(abs(x - peak.first)) + peak.second;
}

pair<int, int> y_intercepts(pair<int, int> peak) {
    return {peak.first - peak.second, peak.first + peak.second};
}

void solve(istream& cin, ostream& cout) {
    pair<int, int> peaks[N];

    for (int i = 0; i < N; i = i + 1) {
        cin >> peaks[i].second >> peaks[i].first;
    }

    sort(peaks, peaks + N);

    int visible = N;

    for (int i = 0; i < N; i = i + 1) {
        for (int j = N - 1; j > i; j = j - 1) {
            pair<int, int> peak = {peaks[j].second, peaks[j].first};

            if (y_intercepts(peak).first <= peaks[i].second) {
                if (peaks[i].second <= y_intercepts(peak).second) {
                    if (peaks[i].first <= f(peaks[i].second, peak)) {
                        visible = visible - 1;
                        break;
                    }
                }
            }
        }
    }

    cout << visible << "\n";
}

int main() {
    ifstream cin("mountains.in");
    ofstream cout("mountains.out", ios::ate);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    solve(cin, cout);
}