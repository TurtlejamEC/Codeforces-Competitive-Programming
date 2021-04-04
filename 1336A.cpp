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

//int calcAns(int current, int depth, int numIndustry, vector<bool>& isIndustry, vector<bool>& visited, vector< vector<int> >& adj) {
//    if (visited[current]) return 0;
//    visited[current] = true;
//
//    int ans = 0;
//    for (int i: adj[current]) {
//        ans += calcAns(i, depth+1, numIndustry + (isIndustry[current] ? 1 : 0), isIndustry, visited, adj);
//    }
//
//    cout << current << " " << (ans + (isIndustry[current] ? depth - numIndustry : 0)) << endl;
//    return ans + (isIndustry[current] ? depth - numIndustry : 0);
//}

int dfs(int current, int depth, vector<int>& depths, vector<int>& children, vector<bool>& visited, vector< vector<int> >& adj, priority_queue<pair<int, int> >& choices) {
    if (visited[current]) return 0;
    visited[current] = true;
    depths[current] = depth;
    
    for (int i: adj[current]) {
        children[current] += dfs(i, depth+1, depths, children, visited, adj, choices);
    }
    
    if (children[current] == 0) {
        choices.push({depth, current});
    }
    return children[current] + 1;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector< vector<int> > adj(n);
    for (int i = 0; i < n-1; i++) {
        int u, v;
        cin >> u >> v;
        u--; v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    priority_queue<pair<int, int> > choices;
    vector<bool> visited(n);
    vector<int> children(n), depths(n);
    dfs(0, 0, depths, children, visited, adj, choices);
    
    visited.assign(n, false);
    ll ans = 0;
    for (int i = 0; i < k; i++) {
        int deltaCost = choices.top().first;
        int current = choices.top().second;
        choices.pop();
        while (visited[current]) {
            deltaCost = choices.top().first;
            current = choices.top().second;
            choices.pop();
        }

        visited[current] = true;
        ans += deltaCost;
        
        for (int i: adj[current]) {
            if (!visited[i]) {
                choices.push({depths[i] - children[i], i});
            }
        }
    }

    cout << ans << endl;
    return 0;
}