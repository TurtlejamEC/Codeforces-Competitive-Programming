#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

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

    vector<int> parent(8*7+8, -1);
    // direction to parent
    vector<string> direction(8*7+8);
    int start = (a[1]-'1') * 8 + a[0]-'a';
    int end = (b[1]-'1') * 8 + b[0]-'a';
    queue<int> next;
    next.push(start);

    while (!next.empty()) {
        int cur = next.front();
        next.pop();

        if (cur == end) break;
        for (int i: adj[cur]) {
            if (parent[i] != -1) continue;

            parent[i] = cur;
            if (i - cur == 1) direction[i] = "R";
            else if (i - cur == 9) direction[i] = "RU";
            else if (i - cur == 8) direction[i] = "U";
            else if (i - cur == 7) direction[i] = "LU";
            else if (cur - i == 1) direction[i] = "L";
            else if (cur - i == 9) direction[i] = "LD";
            else if (cur - i == 8) direction[i] = "D";
            else direction[i] = "RD";
            next.push(i);
        }
    }

    int cur = end;
    stack<string> order;
    while (cur != start) {
        order.push(direction[cur]);
        cur = parent[cur];
    }

    cout << order.size() << endl;

    while (!order.empty()) {
        cout << order.top() << endl;
        order.pop();
    }

    return 0;
}