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

#define ull unsigned long long;
#define ll long long;

using namespace std;

int main() {
    int n;
    cin >> n;
    vector< queue<int> > typed(3);
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        typed[a-1].push(i);
    }
    vector<string> teams;
    while (!(typed[0].empty() || typed[1].empty() || typed[2].empty())) {
        string s = to_string(typed[0].front()) + " " +  to_string(typed[1].front()) + " " + to_string(typed[2].front());
        teams.push_back(s);
        typed[0].pop(); typed[1].pop(); typed[2].pop();
    }
    cout << teams.size() << endl;
    for (int i = 0; i < teams.size(); i++) {
        cout << teams[i] << endl;
    }
    return 0;
}