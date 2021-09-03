#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector< vector<int> > graph(n + 1);
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    vector<int> level(n + 1, -1);
    vector<int> parent(n + 1, -1);
    vector<int> childCount(n + 1, 0);
    vector<bool> visited(n + 1);
    vector<int> reachAtLevel;
    queue<int> next;
    int current = 1;
    next.push(current);
    level[current] = 0;
    visited[current] = true;

    if (reachAtLevel.size() == level[current]) {
        reachAtLevel.push_back(1);
    }

    while (!next.empty()) {
        current = next.front();
        next.pop();

        for (int i: graph[current]) {
            if (visited[i]) continue;

            visited[i] = true;
            level[i] = level[current] + 1;
            parent[i] = current;
            childCount[current]++;

            if (reachAtLevel.size() == level[i]) {
                reachAtLevel.push_back(1);
            } else {
                reachAtLevel[level[i]]++;
            }

            next.push(i);
        }
    }

    bool end = false;
    queue<int> parentQueue;
    pair<int, int> currentParent;

    vector<int> sequence(n);
    for (int i = 0; i < n; i++) {
        int a;
        cin >> sequence[i];
    }

    if (n == 1 && sequence[0] == 1) {
        cout << "Yes";
        return 0;
    }

    for (int i = 0; i < n; i++) {
        int a = sequence[i];

        if (childCount[a] != 0) {
            parentQueue.push(a);
        }

        if (a == 1) {
            currentParent = {parentQueue.front(), childCount[parentQueue.front()]};
            parentQueue.pop();
            continue;
        }


        if (parent[a] != currentParent.first) {
            end = true;
            break;
        }
        currentParent.second--;

        if (currentParent.second == 0 && i != n - 1) {
            currentParent = {parentQueue.front(), childCount[parentQueue.front()]};
            parentQueue.pop();
        }
    }

    if (end) {
        cout << "No";
    } else {
        cout << "Yes";
    }

    return 0;
}