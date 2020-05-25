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

    int streak = 1;
    int ans = 1;
    for (int i = 1; i < n; i++) {
        if (nums[i] > nums[i-1]*2) {
            ans = max(ans, streak);
            streak = 1;
        } else {
            streak++;
        }
    }
    ans = max(ans, streak);
    cout << ans << endl;
    return 0;
}