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
    ull ans = 0, l = 0, r = n-1;
    ull lSum = nums[l], rSum = nums[r];
    while (l != r) {
        if (lSum == rSum) {
            ans = lSum;
            l++;
            lSum += nums[l];
        } else {
            if (lSum < rSum) {
                l++;
                lSum += nums[l];
            } else {
                r--;
                rSum += nums[r];
            }
        }
    }
    cout << ans;
    return 0;
}