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

#define ull unsigned long long
#define ll long long

using namespace std;

class DSU {
public:
    struct component {
        int parent;
        int rank;
    };

    vector<component> components;

    int find(int i) {
        if (components[i].parent != i) {
            components[i].parent = find(components[i].parent);
        }

        return components[i].parent;
    }

    void join(int a, int b) {
        int aRoot = find(a);
        int bRoot = find(b);

        if (aRoot == bRoot) {
            return;
        } else if (components[aRoot].rank < components[bRoot].rank) {
            components[aRoot].parent = bRoot;
        } else if (components[aRoot].rank > components[bRoot].rank) {
            components[bRoot].parent = aRoot;
        } else {
            components[aRoot].parent = bRoot;
            components[bRoot].rank++;
        }
    }

    int ans() {
        set<int> ids;
        for (int i = 0; i < components.size(); i++) {
            ids.insert(find(i));
        }
        return ids.size()-1;
    }

    DSU (int n) {
        components = vector<component>(n);
        for (int i = 0; i < n; i++) {
            components[i].parent = i;
            components[i].rank = 1;
        }
    }
};

int main() {
    int n;
    cin >> n;
    DSU groups(n);
    vector<int> xId(1001, -1), yId(1001, -1);
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        if (xId[x] != -1) {
            groups.join(xId[x], i);
        }
        if (yId[y] != -1) {
            groups.join(yId[y], i);
        }

        xId[x] = i;
        yId[y] = i;
    }

    cout << groups.ans() << endl;

    return 0;
}