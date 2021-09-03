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
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        vector<int> sticks(4*n);
        for (int i = 0; i < 4*n; i++) {
            cin >> sticks[i];
        }
        sort(sticks.begin(), sticks.end());
        int area = *sticks.begin() * *sticks.rbegin();

        bool ans = true;
        for (int i = 0; i < 2*n; i += 2) {
            if (!(sticks[i] == sticks[i+1] && sticks[4*n-1-i] == sticks[4*n-1-i-1] && sticks[i] * sticks[4*n-1-i] == area)) {
                ans = false;
            }
        }

        cout << (ans ? "YES" : "NO") << endl;
    }
    return 0;
}