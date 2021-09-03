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

int DFS(int current, const int& m, int maxStreak, int currentStreak, vector<bool>& hasCat, vector< vector<int> >& adj, vector<bool>& visited) {
    int thisStreak = hasCat[current] ? currentStreak + 1 : 0;

    int ans = adj[current].size() == 1 && current != 1 && max(maxStreak, thisStreak) <= m;
    for (int i: adj[current]) {
        if (visited[i]) continue;
        visited[i] = true;
        ans += DFS(i, m, max(maxStreak, thisStreak), thisStreak, hasCat, adj, visited);
    }

    return ans;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<bool> hasCat(n+1);
    for (int i = 1; i <= n; i++) {
        int cat;
        cin >> cat;
        hasCat[i] = cat;
    }

    vector< vector<int> > adj(n+1);
    for (int i = 0; i < n-1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<bool> visited(n+1);
    visited[1] = true;
    cout << DFS(1, m, 0, 0, hasCat, adj, visited) << endl;


    return 0;
}