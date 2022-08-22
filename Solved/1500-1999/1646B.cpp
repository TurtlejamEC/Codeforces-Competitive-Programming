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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

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

        int b = 1, r = nums.size() - 1;       
        ull sumR = nums[r], sumB = nums[b] + nums[b - 1];

        bool ans = false;
        while (b < r) {
            if (sumR > sumB) {
                ans = true;
                break;
            }
            b++;
            r--;
            sumR += nums[r];
            sumB += nums[b];
        }

        cout << (ans ? "YES" : "NO") << '\n';
    }
    return 0;
}