#include <bits/stdc++.h>

using namespace std;

struct Cow {
    int a, t;
};

int N;

void solve(istream& cin, ostream& cout) {
    map<int, Cow> cows;

    pair<int, int> a[N];

    for (int i = 0; i < N; i = i + 1) {
        cin >> a[i].first;

        a[i].second = i;

        cows[i].a = a[i].first;

        cin >> cows[i].t;
    }

    sort(a, a + N);

    set<int> queue;

    int longest_wait_time = 0;

    int i = 0, j = 0, time = 0;

    while (i < N) {
        if (queue.empty()) {
            time = time + abs(a[i].first - time) + cows[a[i].second].t;
        } else if (!queue.empty()) {
            longest_wait_time = max(longest_wait_time, abs(cows[*queue.begin()].a - time));

            time = time + cows[*queue.begin()].t;

            queue.erase(queue.begin());
        }

        for (int k = max(i + 1, j + 1); k < N; k = k + 1) {
            if ((a[k].first < time) && !(queue.count(a[k].second))) {
                queue.insert(a[k].second);
            } else {
                break;
            }

            j = k;
        }

        i = i + 1;
    }

    cout << longest_wait_time << "\n";
}

int main() {
    ifstream cin("convention2.in");
    ofstream cout("convention2.out", ios::ate);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    solve(cin, cout);
}