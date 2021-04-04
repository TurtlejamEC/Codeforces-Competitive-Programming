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
    int n;
    cin >> n;
    vector<int> nums(n+2,0);
    nums[0] = INT_MAX;
    nums[n+1] = INT_MAX;

    int lo = 1, hi = n;
    while (true) {
        int mid = (lo + hi) / 2;
        if (!nums[mid]) {
            cout << "? " << mid << endl;
            cin >> nums[mid];
        }

        if (!nums[mid+1]) {
            cout << "? " << (mid+1) << endl;
            cin >> nums[mid+1];
        }

        if ((nums[mid-1] > nums[mid] && nums[mid] < nums[mid+1]) || nums[mid] == 1) {
            cout << "! " << mid << endl;;
            break;
        }

        if (nums[mid] > nums[mid+1]) {
            lo = mid+1;
        } else {
            hi = mid;
        }
    }
    return 0;
}