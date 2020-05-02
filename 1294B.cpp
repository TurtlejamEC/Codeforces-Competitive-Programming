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
        vector< pair<int, int> > pos(n);
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            pos[i] = {x, y};
        }

        sort(pos.begin(), pos.end());

        int hiX = 0, hiY = 0;
        bool possible = true;
        string ans = "";
        for (int i = 0; i < n; i++) {
            int deltaX = pos[i].first-hiX;
            int deltaY = pos[i].second-hiY;

            if (deltaX < 0 || deltaY < 0) {
                possible = false;
                break;
            }

            while(deltaX--) {
                ans += 'R';
            }
            while(deltaY--) {
                ans += 'U';
            }

            hiX = pos[i].first;
            hiY = pos[i].second;
        }

        if (possible) {
            cout << "YES" << endl;
            cout << ans << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}