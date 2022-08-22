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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> pos(k);
        for (int i = 0; i < k; i++) {
            cin >> pos[i];
        }
        sort(pos.begin(), pos.end());

        int hi = k;
        int lo = 0;
        
        while (hi > lo) {
            int mid = (hi + lo + 1) / 2;
            
            ll cat = 0;
            bool possible = true;
            for (int mouse = k - mid; mouse < k; mouse++) {
                if (cat >= pos[mouse]) {
                    possible = false;
                }

                cat += n - pos[mouse];
            }

            if (possible) {
                lo = mid;
            } else {
                hi = mid - 1;
            } 
            // cout << lo << " " << hi<< '\n';
        }

        cout << hi << '\n';
    }
    return 0;
}