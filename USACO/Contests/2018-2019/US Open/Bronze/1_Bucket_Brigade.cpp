/*
ID: jiakang3
TASK: task
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

int grid[10][10];
pair<int, int> barn, lake, rock;

int distance(pair<int, int> a, pair<int, int> b) {
    return (abs(a.first - b.first) + abs(a.second - b.second));
}

void solve(istream& cin, ostream& cout) {
    int barn_to_lake, barn_to_rock, lake_to_rock, result;

    barn_to_lake = distance(barn, lake);
    barn_to_rock = distance(barn, rock);
    lake_to_rock = distance(lake, rock);

    result = barn_to_lake - 1;

    if (((barn.first == lake.first) || (barn.second == lake.second)) && (barn_to_lake == barn_to_rock + lake_to_rock)) {
        result = result + 2;
    }

    cout << result << "\n";
}

int main() {
    ifstream cin("buckets.in");
    ofstream cout("buckets.out", ios::ate);

    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < 10; i = i + 1) {
        string row;
        cin >> row;

        for (int j = 0; j < 10; j = j + 1) {
            grid[i][j] = row[j];

            if (grid[i][j] == 'B') {
                barn.first = i;
                barn.second = j;
            } else if (grid[i][j] == 'L') {
                lake.first = i;
                lake.second = j;
            } else if (grid[i][j] == 'R') {
                rock.first = i;
                rock.second = j;
            }
        }
    }

    solve(cin, cout);
}