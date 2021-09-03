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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        bool ans = false;
        for (int i = 0; i < n-1; i++) {
            if (abs(nums[i+1] - nums[i]) >= 2) {
                cout << "YES" << endl;
                cout << i+1 << " " << i+2 << endl;
                ans = true;
                break;
            }
        }

        if (!ans) {
            cout << "NO" << endl;
        }
    }

    return 0;
}