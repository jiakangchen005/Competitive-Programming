/*
ID: jiakang3
TASK: task
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> barns(3);
set<int> result;

void generate(vector<int> origin, vector<int> destination, int tank, int day) {
    if (day == 4) {
        for (int x = 0; x < origin.size(); x = x + 1) {
            result.insert(tank + origin[x]);
        }
    } else {
        vector<int> newOrigin, newDestination;
        int newTank;

        for (int x = 0; x < origin.size(); x = x + 1) {
            newOrigin = destination;
            newDestination = origin;

            newDestination.erase(newDestination.begin() + x);
            newOrigin.push_back(origin[x]);

            if (day % 2) {
                newTank = tank - origin[x];
            } else {
                newTank = tank + origin[x];
            }

            generate(newOrigin, newDestination, newTank, day + 1);
        }
    }
}

void solve(istream& cin, ostream& cout) {
    generate(barns[1], barns[2], 1000, 1);
    
    cout << result.size() << "\n";
}

int main() {
    ifstream cin("backforth.in");
    ofstream cout("backforth.out", ios::ate);

    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int x = 1; x <= 2; x = x + 1) {
        for (int y = 0; y < 10; y = y + 1) {
            int bucket;
            cin >> bucket;
            if (count(barns[x].begin(), barns[x].end(), bucket) <= 1) {
                barns[x].push_back(bucket);
            }
        }
    }

    solve(cin, cout);
}