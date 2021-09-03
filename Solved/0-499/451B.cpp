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
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    vector<int> sorted(nums);
    sort(sorted.begin(), sorted.end());
    int rightIndex = -1;
    int lBound = -1, rBound = -1;
    for (int i = 0; i < n; i++) {
        if (lBound == -1 && rBound == -1 && nums[i] != sorted[i]) {
            rightIndex = lower_bound(sorted.begin(), sorted.end(), nums[i]) - sorted.begin();
            rBound = rightIndex+1;
        } else if (lBound == -1 && rBound != -1 && nums[i] != sorted[rightIndex]) {
            lBound = rightIndex+2;
        } else if (lBound != -1 && rBound != -1 && nums[i] != sorted[i]) {
            cout << "no" << endl;
            return 0;
        }

        if (lBound == -1 && rBound != -1) {
            rightIndex--;
        }
    }

    if (rBound != -1 && lBound == -1) {
        lBound = rightIndex+2;
    }

    cout << "yes" << endl;
    if (rBound != -1 && lBound != -1) {
        cout << lBound << " " << rBound << endl;
    } else {
        cout << 1 << " " << 1 << endl;
    }
    return 0;
}