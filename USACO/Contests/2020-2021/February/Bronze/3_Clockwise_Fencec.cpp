#include <bits/stdc++.h>

using namespace std;

set<string> clockwise = {"ES", "SW", "WN", "NE"};
set<string> counterclockwise = {"WS", "SE", "EN", "NW"};

int n;

int get_angle(char current, char next) {
    string turn = string() + current + next;

    int angle = 0;

    if (clockwise.count(turn)) {
        angle = 90;
    } else if (counterclockwise.count(turn)) {
        angle = -90;
    }

    return angle;
}

void solve(istream& cin, ostream& cout) {
    for (int i = 0; i < n; i = i + 1) {
        string path;
        cin >> path;

        char current = path[0];

        int answer = 0;

        for (int j = 0; j < path.length(); j = j + 1) {
            if (path[j] != current) {
                answer = answer + get_angle(current, path[j]);
                current = path[j];
            }
        }

        if (path[0] != path[path.length() - 1]) {
            answer = answer + get_angle(path[path.length() - 1], path[0]);
        }

        if (answer == 360) {
            cout << "CW";
        } else if (answer == -360) {
            cout << "CCW";
        }

        cout << "\n";
    }
}

int main() {
    // ifstream cin(".in");
    // ofstream cout(".out", ios::ate/app);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    solve(cin, cout);
}