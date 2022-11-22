#include <bits/stdc++.h>

using namespace std;

int n;

map<string, pair<string, int>> cows;

map<string, int> animals = {
    {"Ox", 1}, 
    {"Tiger", 2}, 
    {"Rabbit", 3}, 
    {"Dragon", 4}, 
    {"Snake", 5}, 
    {"Horse", 6}, 
    {"Goat", 7}, 
    {"Monkey", 8}, 
    {"Rooster", 9}, 
    {"Dog", 10}, 
    {"Pig", 11}, 
    {"Rat", 12}
};

int years(string direction, string animal, string cow) {
    int difference = abs(animals[animal] - animals[cows[cow].first]), result = 0;

    if (direction == "previous") {
        if (animals[animal] < animals[cows[cow].first]) {
            result = cows[cow].second - difference;
        } else if (animals[animal] >= animals[cows[cow].first]) {
            result = cows[cow].second - (12 - difference);
        }
    } else if (direction == "next") {
        if (animals[animal] <= animals[cows[cow].first]) {
            result = cows[cow].second + (12 - difference);
        } else if (animals[animal] > animals[cows[cow].first]) {
            result = cows[cow].second + difference;
        }
    }

    return result;
}

void solve(istream& cin, ostream& cout) {
    cows.insert({"Bessie", {"Ox", 0}});

    for (int i = 0; i < n; i = i + 1) {
        string name, born, in, direction, animal, year, from, cow;

        cin >> name >> born >> in >> direction >> animal >> year >> from >> cow;

        cows.insert({name, {animal, years(direction, animal, cow)}});
    }

    cout << abs(cows["Elsie"].second) << "\n";
}

int main() {
    // ifstream cin(".in");
    // ofstream cout(".out", ios::ate/app);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    solve(cin, cout);
}