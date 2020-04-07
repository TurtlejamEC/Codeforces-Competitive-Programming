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

#define ull unsigned long long
#define ll long long

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    set<int> seen;
    vector<int> distinct(n);
    for (int i = n-1; i >= 0; i--) {
        seen.insert(nums[i]);
        distinct[i] = seen.size();
    }
    while (m--) {
        int a;
        cin >> a;
        cout << distinct[a-1] << endl;
    }
    return 0;
}