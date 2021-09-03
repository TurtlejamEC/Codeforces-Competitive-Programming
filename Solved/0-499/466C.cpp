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
    vector< map<ll, ll> > tree;

    ll query(int l, int r, ll lookingFor) {
        ll answer = 0;
        for (l += n, r += n; l < r; l>>=1, r>>=1) {
            if (l&1) {
                if (tree[l].find(lookingFor) != tree[l].end()) {
                    answer += tree[l][lookingFor];
                }
                l++;
            }
            if (r&1) {
                --r;
                if (tree[r].find(lookingFor) != tree[r].end()) {
                    answer += tree[r][lookingFor];
                }
            }
        }
        return answer;
    }

    SegTree(vector<ll>& source) {
        n = source.size();
        tree.resize(2*n);

        for (int i = 0; i < n; i++) {
            if (source[i] != LLONG_MAX) {
                tree[i+n] = {{source[i], 1}};
            }
        }

        for (int i = n-1; i > 0; i--) {
            for (pair<ll,ll> count: tree[i<<1]) {
                if (tree[i].find(count.first) == tree[i].end()) {
                    tree[i].insert({count.first, 0});
                }

                tree[i][count.first] += count.second;
            }

            for (pair<ll,ll> count: tree[i<<1|1]) {
                if (tree[i].find(count.first) == tree[i].end()) {
                    tree[i].insert({count.first, 0});
                }

                tree[i][count.first] += count.second;
            }
        }
    }
};

int main() {
    int n;
    cin >> n;
    if (n < 3) {
        cout << 0 << endl;
        return 0;
    }
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    vector<ll> prefix(n);
    for (int i = 0; i < n; i++) {
        prefix[i] = nums[i];
        if (i == 0) continue;
        prefix[i] += prefix[i-1];
    }
    vector<ll> source(n, LLONG_MAX);
    for (int i = 1; i < n-1; i++) {
        source[i] = (prefix[i] - (prefix[n-1]-prefix[i]) == (prefix[n-1]-prefix[i]) ? (prefix[n-1]-prefix[i]) : LLONG_MAX);
    }
    SegTree tree(source);
    ll ans = 0;
    for (int i = 0; i < n-2; i++) {
        ans += tree.query(i+1, n, prefix[i]);
    }
    cout << ans << endl;
    return 0;
}