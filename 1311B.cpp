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
        int n, m;
        cin >> n >> m;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        vector<int> canSwap(m);
        for (int i = 0; i < m; i++) {
            cin >> canSwap[i];
            canSwap[i]--;
        }

        bool doneSwapping = false;
        while (!doneSwapping) {
            doneSwapping = true;
            for (int i = 0; i < m; i++) {
                if (nums[canSwap[i]] > nums[canSwap[i]+1]) {
                    swap(nums[canSwap[i]], nums[canSwap[i]+1]);
                    doneSwapping = false;
                }
            }
        }

        bool ans = true;
        for (int i = 0; i < n-1; i++) {
            if (nums[i] > nums[i+1]) {
                ans = false;
                break;
            }
        }

        cout << (ans ? "YES" : "NO") << endl;
    }
    return 0;
}