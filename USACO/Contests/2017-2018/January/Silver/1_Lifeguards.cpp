#include <bits/stdc++.h>

using namespace std;

int n;

void solve(istream& cin, ostream& cout) {
    pair<int, int> shifts[n + 2];

    for (int i = 1; i <= n; i = i + 1) {
        cin >> shifts[i].first >> shifts[i].second;
    }

    sort(shifts + 1, shifts + n + 1);

    shifts[0].first = shifts[1].second;
    shifts[n + 1].first = shifts[n].second;

    int alone_time[n + 2];

    fill(alone_time + 1, alone_time + n + 1, 0);

    int time = 0, end = shifts[1].first, minimum = 1e9 + 1;

    for (int i = 1; i <= n; i = i + 1) {
        if (shifts[i].first >= end) {
            alone_time[i] = min(shifts[i].second, shifts[i + 1].first) - shifts[i].first;
        } else if (shifts[i].first < end) {
            if ((shifts[i].second > end) && (shifts[i + 1].first >= end)) {
                alone_time[i] = min(shifts[i].second, shifts[i + 1].first) - end;
            }
        }

        minimum = min(minimum, alone_time[i]);

        time = time + max(end, shifts[i].second) - max(end, shifts[i].first);

        end = max(end, shifts[i].second);
    }

    cout << time - minimum << "\n";
}

int main() {
    ifstream cin("lifeguards.in");
    ofstream cout("lifeguards.out", ios::ate);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    solve(cin, cout);
}