#include <bits/stdc++.h>

using namespace std;

int n;

struct Segment {
    string type;
    int lower, upper;
};

void solve(istream& cin, ostream& cout) {
    Segment segments[n];

    for (int i = 0; i < n; i = i + 1) {
        cin >> segments[i].type >> segments[i].lower >> segments[i].upper;
    }

    int lower = INT_MIN, upper = INT_MAX;

    for (int i = n; i >= 0; i = i - 1) {
        if (segments[i].type == "on") {
            lower = lower - segments[i].upper;
            upper = upper - segments[i].lower;

            lower = max(lower, 0);
        } else if (segments[i].type == "off") {
            lower = lower + segments[i].lower;
            upper = upper + segments[i].upper;
        } else if (segments[i].type == "none") {
            lower = max(lower, segments[i].lower);
            upper = min(upper, segments[i].upper);
        }
    }

    cout << lower << " " << upper << "\n";

    lower = INT_MIN, upper = INT_MAX;

    for (int i = 0; i < n; i = i + 1) {
        if (segments[i].type == "on") {
            lower = lower + segments[i].lower;
            upper = upper + segments[i].upper;
        } else if (segments[i].type == "off") {
            lower = lower - segments[i].upper;
            upper = upper - segments[i].lower;

            lower = max(lower, 0);
        } else if (segments[i].type == "none") {
            lower = max(lower, segments[i].lower);
            upper = min(upper, segments[i].upper);
        }
    }

    cout << lower << " " << upper << "\n";
}

int main() {
    ifstream cin("traffic.in");
    ofstream cout("traffic.out", ios::ate);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    solve(cin, cout);
}