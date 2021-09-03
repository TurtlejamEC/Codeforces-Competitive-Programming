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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        bool possible = true;
        for (int i = 1; i < n; i++) {
            if (nums[i-1] < nums[i] && nums[i] - nums[i-1] > 1) {
                possible = false;
                break;
            }
        }
        cout << (possible ? "Yes" : "No") << '\n';
    }
    return 0;
}