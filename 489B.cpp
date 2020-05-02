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
    vector<int> boys(n);
    for (int i = 0; i < n; i++) {
        cin >> boys[i];
    }
    sort(boys.begin(), boys.end());

    int m;
    cin >> m;
    vector<int> girls(m);
    for (int i = 0; i < m; i++) {
        cin >> girls[i];
    }
    sort(girls.begin(), girls.end());

    int b = 0, g = 0;
    int ans = 0;
    while (b < n && g < m) {
        if (abs(boys[b] - girls[g]) <= 1) {
            b++;
            g++;
            ans++;
        } else {
            if (boys[b] > girls[g]) {
                g++;
            } else {
                b++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}