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

class FenwickTree {
public:
    vector<int> tree;

    void update(int i, int delta) {
        for (i++; i<tree.size(); i += i&-i) {
            tree[i] += delta;
        }
    }

    int query(int i) {
        int ans = 0;
        for (i++; i > 0; i -= i&-i) {
            ans += tree[i];
        }
        return ans;
    }

    FenwickTree(vector<int>& parent) {
        tree.resize(parent.size()+1);
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
//        vector<int> levelCount(101);
//        FenwickTree queryTree(levelCount);
        vector<int> levels(n);
        for (int i = 0; i < n; i++) {
            cin >> levels[i];
//            queryTree.update(levels[i], 1);
        }
        int ans = 0;
        sort(levels.begin(), levels.end());
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (levels[j] < levels[i]) {
                    ans++;
                    break;
                }
            }
        }
//        for (int i = 1; i <= n; i++) {
//            ans += queryTree.query(i-1) > 0;
//        }
        cout << ans << endl;
    }
    return 0;
}