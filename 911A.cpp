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

int main() {
    int n;
    cin >> n;
    vector< pair<int, int> > nums(n);
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        nums[i] = {a, i};
    }
    sort(nums.begin(), nums.end());
    int lo = nums[0].first;
    int ans = nums[1].second - nums[0].second;
    for (int i = 2; i < n; i++) {
        if (nums[i].first != lo) {
            break;
        }
        ans = min(ans, nums[i].second - nums[i-1].second);
    }
    cout << ans << endl;
    return 0;
}