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

char asciitolower(char in) {
    if (in <= 'Z' && in >= 'A')
        return in - ('Z' - 'z');
    return in;
}

typedef unsigned long long ull;
typedef long long ll;

using namespace std;

int dfs(string current, map<string, vector<string> > adj) {
    int ans = 0;
    for (string s: adj[current]) {
        ans = max(ans, dfs(s, adj));
    }
    return ans + 1;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    map<string, vector<string> > adj;
    for (int i = 0; i < n; i++) {
        string a, b, c;
        cin >> a >> b >> c;
        std::transform(a.begin(), a.end(), a.begin(), asciitolower);
        std::transform(c.begin(), c.end(), c.begin(), asciitolower);
        if (adj.find(c) == adj.end()) {
            adj[c] = {};
        }
        adj[c].push_back(a);
    }

    cout << dfs("polycarp", adj);



    return 0;
}