#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int hi = 0, lo = 0;
    for (int i = 1; i < n; i++) {
        if (nums[i] > nums[hi]) {
            hi = i;
        } else if (nums[i] <= nums[lo]) {
            lo = i;
        }
    }

    cout << hi + n - 1 - lo + (hi > lo ? -1 : 0);

    return 0;
}