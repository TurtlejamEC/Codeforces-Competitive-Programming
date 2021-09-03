#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <set>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector< vector<int> > graph(n + 1);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    vector<bool> visited(n + 1);
    vector<int> sequence;

    set<int> next;
    visited[1] = true;
    next.insert(1);

    while (!next.empty()) {
        int current = *next.begin();
        next.erase(next.begin());
        sequence.push_back(current);

        for (int i: graph[current]) {
            if (visited[i]) continue;

            visited[i] = true;
            next.insert(i);
        }
    }

    for (int i = 0; i < sequence.size(); i++) {
        cout << sequence[i] << " ";
    }

    return 0;
}