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
#include <bitset>

#define ull unsigned long long
#define ll long long

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    deque<int> ans;
    ans.push_back(nums[0]);
    bool front = true;
    for (int i = 1; i < n; i++) {
        if (front) {
            ans.push_front(nums[i]);
        } else {
            ans.push_back(nums[i]);
        }
        front = !front;
    }
    for (int i = 0; i < n; i++) {
        if (ans[(i+1)%n] + ans[(i-1+n)%n] <= ans[i]) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES" << endl;
    for (int i: ans) {
        cout << i << " ";
    }
    return 0;
}