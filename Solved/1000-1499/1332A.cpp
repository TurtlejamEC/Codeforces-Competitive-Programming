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

bool in (int x, int y, int x1, int y1, int x2, int y2) {
    return x1 <= x && x <= x2 && y1 <= y && y <= y2;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int x, x1, x2, y, y1, y2;
        cin >> x >> y >> x1 >> y1 >> x2 >> y2;

        if (!in(x, y, x1, y1, x2, y2)) {
            cout << "No" << endl;
            continue;
        }

        int deltaX = b-a, deltaY = d-c;
        if (deltaX == 0 && a > 0) {
            if (!(in(x+1, y, x1, y1, x2, y2) || in(x-1, y, x1, y1, x2, y2))) {
                cout << "No" << endl;
                continue;
            }
        }

        if (deltaY == 0 && c > 0) {
            if (!(in(x, y+1, x1, y1, x2, y2) || in(x, y-1, x1, y1, x2, y2))) {
                cout << "No" << endl;
                continue;
            }
        }

        if (!in(x+deltaX, y+deltaY, x1, y1, x2, y2)) {
            cout << "No" << endl;
        } else{
            cout << "Yes" << endl;
        }
    }
    return 0;
}