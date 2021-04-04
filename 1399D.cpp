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
        string s;
        cin >> s;
        vector< set<int> > last(2);
        vector<int> ans(n);
        int ansNum = 0;
        for (int i = 0; i < s.size(); i++) {
            int current = s[i] - '0';
            int other = current^1;
            if (last[other].size() > 0) {
                ans[i] = *last[other].begin();
                last[other].erase(ans[i]);
            } else {
                if (last[current].empty()) {
                    ans[i] = 1;
                } else {
                    ans[i] = *last[current].rbegin() + 1;
                }
            }
            last[current].insert(ans[i]);
            ansNum = max(ansNum, ans[i]);
        }
        cout << ansNum << endl;
        for (int i: ans) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}