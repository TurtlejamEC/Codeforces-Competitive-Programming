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
        sort(nums.begin(), nums.end());

        vector<int> test(n);
        int ans = -1;
        for (int i = 1; i <= 1024; i++) {
            for (int j = 0; j < n; j++) {
                test[j] = nums[j] ^ i;
            }

            sort(test.begin(), test.end());
            bool works = true;
            for (int j = 0; j < n; j++) {
                if (test[j] != nums[j]) {
                    works = false;
                    break;
                }
            }

            if (works) {
                ans = i;
                break;
            }
        }

        cout << ans << endl;


    }
    return 0;
}