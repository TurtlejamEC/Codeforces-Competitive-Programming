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
        vector<int> ans(2*n);
        vector<bool> used(2*n+1);
        for (int i = 0; i < n; i++) {
            cin >> ans[2*i];
            used[ans[2*i]] = true;
        }
        bool possible = true;
        for (int i = 0; i < n; i++) {
            int found = 0;
            for (int j = ans[2*i]+1; j <= 2*n; j++) {
                if (!used[j]) {
                    found = j;
                    used[j] = true;
                    break;
                }
            }
            if (found) {
                ans[2*i+1] = found;
            } else {
                possible = false;
                break;
            }
        }
        if (possible) {
            for (int i: ans) {
                cout << i << " ";
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}