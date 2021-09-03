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
    vector<int> badges(n);
    for (int i = 0; i < n; i++) {
        cin >> badges[i];
    }
    sort(badges.begin(), badges.end());
    int ans = 0;
    for (int i = 1; i < n; i++) {
        if (badges[i] <= badges[i-1]) {
            ans += badges[i-1]-badges[i]+1;
            badges[i] = badges[i-1]+1;
        }
    }
    cout << ans << endl;
    return 0;
}