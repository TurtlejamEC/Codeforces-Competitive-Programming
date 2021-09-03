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
        for (int i = n/2; i < n; i++) {
            cout << nums[i] << " ";

            if (i == n/2 && n % 2 == 1) {
                continue;
            } else {
                cout << nums[n-1-i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}