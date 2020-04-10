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
    sort(nums.rbegin(), nums.rend());
    set<int> possible;
    for (int i = 0; i <= 1000; i++) {
        possible.insert(i*i);
    }
    for (int i: nums) {
        if (possible.find(i) == possible.end()) {
            cout << i;
            break;
        }
    }
    return 0;
}