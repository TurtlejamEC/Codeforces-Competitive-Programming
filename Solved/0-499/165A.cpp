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
    vector< pair<int, int> > points(n);
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        points[i] = {x, y};
    }
    vector< vector<int> > count(n, vector<int>(4));
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (points[i].first == points[j].first) {
                if (points[i].second > points[j].second) {
                    count[i][3]++;
                    count[j][1]++;
                } else {
                    count[i][1]++;
                    count[j][3]++;
                }
            } else if (points[i].second == points[j].second) {
                if (points[i].first > points[j].first) {
                    count[i][2]++;
                    count[j][0]++;
                } else {
                    count[i][0]++;
                    count[j][2]++;
                }
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        bool yes = true;
        for (int j = 0; j < 4; j++) {
            if (!count[i][j]) {
                yes = false;
                break;
            }
        }
        ans += yes;
    }
    cout << ans;
    return 0;
}