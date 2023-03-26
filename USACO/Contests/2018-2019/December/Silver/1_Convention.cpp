#include <bits/stdc++.h>

using namespace std;

int N, M, C;

void solve(istream& cin, ostream& cout) {
    int arrival_times[N];

    for (int i = 0; i < N; i = i + 1) {
        cin >> arrival_times[i];
    }

    sort(arrival_times, arrival_times + N);

    int left = 0, right = 1e9, minimum_maximum_wait_time = right;

    while (left <= right) {
        int wait_time = left + (right - left) / 2;

        int buses = M - 1, space = 0, i = 0, current_time = arrival_times[0];

        while (i < N) {
            if ((space < C) && (arrival_times[i] - current_time <= wait_time)) {
                space = space + 1;

                i = i + 1;
            } else {
                current_time = arrival_times[i];

                buses = buses - 1;
                space = 0;
            }
        }

        if (buses >= 0) {
            minimum_maximum_wait_time = min(minimum_maximum_wait_time, wait_time);

            right = wait_time - 1;
        } else if (buses < 0) {
            left = wait_time + 1;
        }
    }

    cout << minimum_maximum_wait_time << "\n";
}

int main() {
    ifstream cin("convention.in");
    ofstream cout("convention.out", ios::ate);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M >> C;

    solve(cin, cout);
}