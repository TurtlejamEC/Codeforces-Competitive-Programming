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
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    if (n == 1) {
        cout << nums[0];
    } else {
        ull ans = 0;
        ull multiplier = 2;
        for (int i = 0; i < n-2; i++) {
            ans += nums[i] * multiplier;
            multiplier++;
        }
        ans += (nums[n-2] + nums[n-1]) * multiplier;
        cout << ans;
    }
    return 0;
}