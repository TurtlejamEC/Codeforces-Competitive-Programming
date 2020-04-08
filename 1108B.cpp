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
    sort(nums.rbegin(), nums.rend());
    int x = nums[0];
    int y;
    for (int i = 0; i < n; i++) {
        if (x % nums[i] != 0 || i < n-1 && x % nums[i] == 0 && nums[i] == nums[i+1]) {
            y = nums[i];
            break;
        }
    }
    cout << x << " " << y;
    return 0;
}