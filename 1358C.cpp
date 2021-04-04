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
        ull x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        ull x = x2-x1+1;
        ull y = y2-y1+1;
        if (x == 1 || y == 1) {
            cout << 1 << endl;
            continue;
        }

        ull ans = 1+ (min(x, y)-1) * (min(x, y)-1);
        ans += (max(x,y)-min(x,y))*(min(x, y)-1);
        cout << ans << endl;
    }
    return 0;
}