#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    x1--;
    y1--;
    x2--;
    y2--;

    if (x1 == x2 && y1 == y2) cout << 0;
    else if (x1 == x2 || y1 == y2) cout << 1;
    else cout << 2;

    cout << " ";

    if ((8*y1 + x1 + y1) % 2 != (8*y2 + x2 + y2) % 2) cout << 0;
    else if (x1 == x2 && y1 == y2) cout << 0;
    else if (y1 - x1 == y2 - x2 || x1 + y1 == x2 + y2) cout << 1;
    else cout << 2;

    cout << " ";

    vector< vector<int> > adj(8*7+8, vector<int>());
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            int cur = 8*i + j;
            bool canRight = j + 1 < 8;
            bool canUp = i + 1 < 8;
            bool canLeft = j - 1 > -1;
            bool canDown = i - 1 > -1;

            if (canRight) adj[cur].push_back(cur+1);
            if (canRight && canUp) adj[cur].push_back(8+cur+1);
            if (canUp) adj[cur].push_back(8+cur);
            if (canLeft && canUp) adj[cur].push_back(8+cur-1);
            if (canLeft) adj[cur].push_back(cur-1);
            if (canLeft && canDown) adj[cur].push_back(cur-8-1);
            if (canDown) adj[cur].push_back(cur-8);
            if (canRight && canDown) adj[cur].push_back(cur-8+1);
        }
    }

    vector<int> distance(8*7+8, -1);
    int start = y1 * 8 + x1;
    int end = y2 * 8 + x2;
    queue<int> next;
    next.push(start);
    distance[start] = 0;

    while (!next.empty()) {
        int cur = next.front();
        next.pop();

        if (cur == end) break;
        for (int i: adj[cur]) {
            if (distance[i] != -1) continue;

            distance[i] = distance[cur] + 1;
            next.push(i);
        }
    }

    cout << distance[end];

    return 0;
}