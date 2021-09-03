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
        vector<int> count(3);
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            count[a%3]++;
        }

        int ans = min(count[1], count[2]);
        count[1] -= ans;
        count[2] -= ans;
        ans += count[1]/3;
        ans += count[2]/3;
        ans += count[0];
        cout << ans << endl;
    }
    return 0;
}