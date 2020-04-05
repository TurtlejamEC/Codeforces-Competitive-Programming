#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <map>

using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> nums;
    for (int i = 0; i < s.size(); i++) {
        if (isdigit(s[i])) {
            nums.push_back(s[i] - '0');
        }
    }
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++) {
        cout << nums[i] << "+";
    }
    cout << *nums.rbegin();
    return 0;
}