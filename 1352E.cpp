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
    vector<int>prefix(8000);
    vector<int>seen(8001);
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            seen[i] = 0;
        }
//        int hi = 0;
        for (int i = 0; i < n; i++) {
            cin >> prefix[i];
            seen[prefix[i]]++;
            prefix[i] = (i > 0 ? prefix[i-1] : 0) + prefix[i];
//            hi = max(hi, nums[i]);
        }

//        set<int> possible;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                if (prefix[j] - (i > 0 ? prefix[i-1] : 0) <= n) {
                    ans += seen[prefix[j] - (i > 0 ? prefix[i-1] : 0)];
                    seen[prefix[j] - (i > 0 ? prefix[i-1] : 0)] = 0;
                }
            }
        }


//        set<int> possible;
//        int l = 0;
//        int sum = nums[0];
//        for (int r = 0; r < n; r++) {
//            while (r - l + 1 >= 2) {
//                possible.insert(sum);
//                sum -= nums[l];
//                l++;
//            }
//
//            if (r+1 < n) {
//                sum += nums[r+1];
//            }
//        }
//        int ans = 0;
//        for (int i: nums) {
//            ans += possible.find(i) != possible.end();
//        }
        cout << ans << '\n';
    }
    return 0;
}