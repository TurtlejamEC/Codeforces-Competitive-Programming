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

        int current = n-1;
        for (current; current >= 1; current--) {
            if (nums[current-1] < nums[current]) {
                break;
            }
        }

        for (current; current >= 1; current--) {
            if (nums[current-1] > nums[current]) {
                break;
            }
        }

        cout << current << endl;
    }
    return 0;
}