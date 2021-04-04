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

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector< pair<int, int> > queries(q);
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        queries[i] = {l, r};
    }

    vector<int> changes(n);
    for (int i = 0; i < q; i++) {
        changes[queries[i].first - 1]++;
        if (queries[i].second < n) {
            changes[queries[i].second]--;
        }
    }

    int delta = 0;
    vector<pair<int, int>> total(n);
    for (int i = 0; i < n; i++) {
        delta += changes[i];
        total[i] = {delta, i};
    }

    sort(nums.begin(), nums.end());
    sort(total.begin(), total.end());

    vector<int> ordered(n);
    for (int i = 0; i < n; i++) {
        ordered[total[i].second] = nums[i];
    }

    vector<ll> prefix(n);
    prefix[0] = ordered[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i-1] + ordered[i];
    }

    ll ans = 0;
    for (int i = 0; i < q; i++) {
        int l = queries[i].first - 1;
        int r = queries[i].second - 1;
        ans += prefix[r] - (l-1 < 0 ? 0 : prefix[l-1]);
    }
    cout << ans << endl;


    return 0;
}