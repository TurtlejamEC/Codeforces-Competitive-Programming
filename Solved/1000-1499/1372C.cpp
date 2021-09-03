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
        int lSorted = -1;
        for (int i = 0; i < n; i++) {
            if (nums[i] != i+1) break;
            lSorted = i;
        }

        if (lSorted == n-1) {
            cout << 0 << endl;
            continue;
        }

        int rSorted = n;
        for (int i = n-1; i >= 0; i--) {
            if (nums[i] != i+1) break;
            rSorted = i;
        }
        bool rightSpot = false;
        for (int i = lSorted+1; i < rSorted; i++) {
            if (nums[i] == i+1) {
                rightSpot = true;
                break;
            }
        }

        cout << (rightSpot? 2 : 1) << endl;
    }
    return 0;
}