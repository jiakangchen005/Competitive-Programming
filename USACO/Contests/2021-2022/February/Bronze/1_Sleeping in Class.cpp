/*
ID: jiakang3
TASK: task
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

int n;

void solve(istream& cin, ostream& cout) {
    int a[n], sum = 0, result = n - 1;

    for (int i = 0; i < n; i = i + 1) {
        cin >> a[i];

        sum = sum + a[i];
    }

    for (int i = n; i >= 1; i = i - 1) {
        if (sum % i == 0) {
            int current = 0, temp = 0;
            
            for (int j = 0; j < n; j = j + 1) {
                temp = temp + a[j];
                current = current + 1;

                if (temp == sum / i) {
                    temp = 0;
                    current = current - 1;
                } else if (temp > sum / i) {
                    temp = -1;
                    current = n;
                    break;
                }
            }

            result = min(result, current);
        }
    }

    cout << result << "\n";
}

int main() {
    // ifstream cin(".in");
    // ofstream cout(".out", ios::ate/app);

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        cin >> n;

        solve(cin, cout);
    }
}