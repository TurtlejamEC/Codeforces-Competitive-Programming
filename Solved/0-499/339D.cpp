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



class SegTree {
public:
    int n;
    int size;
    vector<int> tree;

    int query() {
        return tree[1];
    }

    int modify(int p, int b) {
        bool level = false;
        for (tree[p += size] = b; p > 1; p >>= 1) {
            if (level) {
                tree[p>>1] = tree[p] ^ tree[p^1];
            } else {
                tree[p>>1] = tree[p] | tree[p^1];
            }
            level = !level;
        }

        return query();
    }

    SegTree(int power, vector<int>& source) {
        n = power-1;
        size = source.size();
        tree.resize(2*size);

        for (int i = 0; i < size; i++) {
            tree[i+size] = source[i];
        }

        for (int i = size-1; i > 0; i--) {
            int copy = i>>1;
            int power = 0;
            while (copy) {
                copy >>= 1;
                power++;
            }

            if ((n - power)&1) {
                tree[i] = tree[i<<1] ^ tree[i<<1|1];
            } else {
                tree[i] = tree[i<<1] | tree[i<<1|1];
            }
        }
    }
};

int main() {
    int n, t;
    cin >> n >> t;
    vector<int> nums(1<<n);
    for (int i = 0; i < 1<<n; i++) {
        cin >> nums[i];
    }
    SegTree segtree(n, nums);
    while (t--) {
        int p, b;
        cin >> p >> b;
        cout << segtree.modify(p-1, b) << endl;
    }
    return 0;
}