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
    int h, m;
    cin >> h >> m;
    int ans = 0;
    int streak = 1;
    int prevH = h, prevM = m;
    for (int i = 1; i < n; i++) {
        cin >> h >> m;
        if (prevH == h && prevM == m) {
            streak++;
        } else {
            ans = max(ans, streak);
            streak = 1;
            prevH = h;
            prevM = m;
        }
    }

    ans = max(ans, streak);
    cout << ans << endl;
    return 0;
}