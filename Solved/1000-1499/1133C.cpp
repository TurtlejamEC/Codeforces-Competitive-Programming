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
    vector<int> skill(n);
    for (int i = 0; i < n; i++) {
        cin >> skill[i];
    }

    sort(skill.begin(), skill.end());

    int l = 0, r = 0;
    int ans = 1;
    while(l != n-1 || r != n-1) {
        if (skill[r] - skill[l] <= 5) {
            ans = max(ans, r - l + 1);
            if (r == n-1) {
                l++;
            } else {
                r++;
            }
        } else {
            l++;
        }
    }
    cout << ans << endl;
    return 0;
}