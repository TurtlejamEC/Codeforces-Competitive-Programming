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
    vector<int> nums(n);
    int hi = 0;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        hi = max(nums[i], hi);
    }
    int streak = 0;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == hi) {
            streak++;
        } else {
            ans = max(ans, streak);
            streak = 0;
        }
    }
    ans = max(ans, streak);
    cout << ans;
    return 0;
}