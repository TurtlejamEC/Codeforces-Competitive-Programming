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

struct FenwickTree {
public:
    vector<int> tree;

    void update(int index, int delta) {
        for (; index < tree.size(); index |= index+1) tree[index] += delta;
    }

    int query(int index) {
        int result = 0;
        for (; index > 0; index &= index - 1) result += tree[index-1];
        return result;
    }

    FenwickTree(vector<int>& source) {
        tree = vector<int>(source);
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> ans(n+1);
        priority_queue<pair<int, pair<int, int> > > next;
        FenwickTree tree(ans);
        set<int> done;
        next.push({n, {-1, -(n+1)}});
        for (int i = 1; i <= n; i++) {
            auto current = next.top();
            current.second.first = -current.second.first;
            current.second.second = -current.second.second;
            next.pop();
            while (tree.query(current.second.second) - tree.query(current.second.first)) {
                current = next.top();
                current.second.first = -current.second.first;
                current.second.second = -current.second.second;
                next.pop();
            }
            int pos;
            if (current.first&1) {
                pos = (current.second.first + current.second.second-1)/2;
            } else {
                pos = (current.second.first + current.second.second-2)/2;
            }
            ans[pos] = i;
            auto insertPos = done.upper_bound(pos);

            if (insertPos == done.begin()) {
                next.push({pos-1, {-1, -pos}});
            } else {
                insertPos--;
                next.push({pos - (*insertPos) - 1, {-(*insertPos+1), -pos}});
                insertPos++;
            }

            if (insertPos == done.end()) {
                next.push({n+1-pos-1, {-(pos+1), -(n+1)}});
            } else {
                next.push({*insertPos - pos - 1, {-(pos+1),-*insertPos}});
            }

            done.insert(insertPos, pos);
            tree.update(pos, i);
        }
        for (int i = 1; i <= n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}