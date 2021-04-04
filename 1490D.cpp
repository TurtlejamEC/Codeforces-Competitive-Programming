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

void calcDepths(int l, int r, int depth, vector<int>& nums, vector<int>& depths) {
    if (l == r) {
        depths[nums[l]] = depth;
        return;
    }

    int maxIndex = l;
    for (int i = l+1; i <= r; i++) {
        if (nums[i] > nums[maxIndex]) {
            maxIndex = i;
        }
    }
    depths[nums[maxIndex]] = depth;
    if (maxIndex > l) {
        calcDepths(l, maxIndex-1, depth+1, nums,depths);
    }

    if (maxIndex < r) {
        calcDepths(maxIndex+1, r, depth+1, nums,depths);
    }
}

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
        vector<int> depths(n+1);
        calcDepths(0, n-1, 0, nums, depths);
        for (int i = 0; i < n; i++) {
            cout << depths[nums[i]] << " ";
        }
        cout << endl;
    }
    return 0;
}