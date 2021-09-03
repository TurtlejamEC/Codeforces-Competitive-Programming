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
#define x first
#define y second

using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    vector< pair<int, int> > points = {{x1, y1}, {x2, y2}};
    sort(points.begin(), points.end());
    int deltaX = abs(points[1].x-points[0].x);
    int deltaY = abs(points[1].y-points[0].y);

    if (x1 == x2) {
        printf("%d %d %d %d", points[0].x+deltaY, points[0].y, points[1].x+deltaY, points[1].y);
    } else if (y1 == y2) {
        printf("%d %d %d %d", points[0].x, points[0].y+deltaX, points[1].x, points[1].y+deltaX);
    } else {
        if (deltaX == deltaY) {
            printf("%d %d %d %d", points[0].x, points[1].y, points[1].x, points[0].y);
        } else {
            cout << -1;
        }
    }
    return 0;
}