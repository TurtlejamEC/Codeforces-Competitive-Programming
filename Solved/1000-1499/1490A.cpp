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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        int ans = 0;
        for (int i = 0; i < n-1; i++) {
            int factor = (max(nums[i], nums[i+1]) + min(nums[i], nums[i+1]) - 1) / min(nums[i], nums[i+1]);
            if (factor <= 2) continue;

            int lo = min(nums[i], nums[i+1]);
            int hi = max(nums[i], nums[i+1]);
            while ((hi + lo - 1) / lo != 2) {
                lo *= 2;
                ans++;
            }
//            if (factor <= 4) {
//                ans++;
//            } else {
//                ans += 2;
//            }
        }
        cout << ans << endl;
    }
    return 0;
}