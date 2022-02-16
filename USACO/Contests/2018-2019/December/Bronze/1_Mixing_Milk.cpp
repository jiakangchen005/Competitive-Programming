/*
ID: jiakang3
TASK: task
LANG: C++
*/

#include <bits/stdc++.h>

struct bucket {
    int c, m;
};

bucket buckets[3];

using namespace std;

void solve(istream& cin, ostream& cout) {
    int current = 0;

    for (int x = 0; x < 100; x = x + 1) {
        int temp = min(buckets[(current + 1) % 3].m + buckets[current].m, buckets[(current + 1) % 3].c);

        buckets[current].m = buckets[current].m - abs(buckets[(current + 1) % 3].m - temp);
        buckets[(current + 1) % 3].m = temp;

        current = (current + 1) % 3;
    }

    for (int x = 0; x < 3; x = x + 1) {
        cout << buckets[x].m << "\n";
    }
}

int main() {
    ifstream cin("mixmilk.in");
    ofstream cout("mixmilk.out", ios::ate);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> buckets[0].c >> buckets[0].m;
    cin >> buckets[1].c >> buckets[1].m;
    cin >> buckets[2].c >> buckets[2].m;

    solve(cin, cout);
}