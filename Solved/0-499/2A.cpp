#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <deque>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <string>
#include <cmath>
#include <iomanip>
#include <climits>
#include <bitset>

typedef unsigned long long ull;
typedef long long ll;

using namespace std;

int main() {
    int n;
    cin >> n;
    vector< pair<string, int> > timeline(n);
    map<string, int> people;
    for (int i = 0; i < n; i++) {
        string name;
        int delta;
        cin >> name >> delta;
        timeline[i] = {name, delta};
        if (people.find(name) == people.end()) {
            people[name] = 0;
        }
        people[name] += delta;
    }

    int hi = 0;
    for (pair<string, int> i: people) {
        hi = max(hi, i.second);
    }

    set<string> hasMax;
    for (pair<string, int> i: people) {
        if (i.second == hi) {
            hasMax.insert(i.first);
        }
    }

    people.clear();
    for (int i = 0; i < n; i++) {
        string name = timeline[i].first;
        int delta = timeline[i].second;
        if (people.find(name) == people.end()) {
            people[name] = 0;
        }
        people[name] += delta;

        if (hasMax.find(name) != hasMax.end() && people[name] >= hi) {
            cout << name << endl;
            break;
        }
    }
    return 0;
}