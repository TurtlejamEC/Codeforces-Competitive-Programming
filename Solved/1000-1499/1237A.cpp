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
    int n;
    cin >> n;
    vector<int> original(n);
    vector<int> ans(n);
    vector<int> odd;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        original[i] = a;
        if (abs(a) % 2 == 1) {
            odd.push_back(i);
        }
        sum += a/2;
        ans[i] = a/2;
    }

    for (int i = 0; i < odd.size(); i++) {
        if (sum == 0) break;
        if (sum < 0 && original[odd[i]] > 0) {
            ans[odd[i]]++;
            sum++;
        } else if (sum > 0 && original[odd[i]] < 0) {
            ans[odd[i]]--;
            sum--;
        }
    }

    for (int i: ans) {
        cout << i << endl;
    }
    return 0;
}