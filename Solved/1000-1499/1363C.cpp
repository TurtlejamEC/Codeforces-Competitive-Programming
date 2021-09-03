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

void dfsCount(int current, int& count, vector<bool>& visited, vector<vector<int> >& adj) {
    if (visited[current]) return;
    visited[current] = true;
    count++;

    for (int i: adj[current]) {
        dfsCount(i, count, visited, adj);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        x--;
        vector< vector<int> > adj(n);
        for (int i = 0; i < n-1; i++) {
            int u, v;
            cin >> u >> v;
            u--; v--;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<bool> visited(n);
        visited[x] = true;
        int count = 0;
        for (int i: adj[x]) {
            dfsCount(i, count, visited, adj);
        }
        count++;
        if (adj[x].size() == 1 || n == 1) {
            cout << "Ayush" << endl;
        } else {
            if (count&1) {
                cout << "Ashish" << endl;
            } else {
                cout << "Ayush" << endl;
            }
        }
    }
    return 0;
}