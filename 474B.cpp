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
    vector<int> piles(n);
    for (int i = 0; i < n; i++) {
        cin >> piles[i];
    }
    int m;
    cin >> m;
    vector< pair<int, int> > want(m);
    for (int i = 0; i < m; i++) {
        int a;
        cin >> a;
        want[i] = {a, i};
    }
    sort(want.begin(), want.end());
    int hi = piles[0];
    int pileNum = 1;
    vector< pair<int, int> > ans(m);
    for (int i = 0; i < m; i++) {
        while (want[i].first > hi) {
            hi += piles[pileNum];
            pileNum++;

        }

        ans[i] = {want[i].second, pileNum};
    }
    sort(ans.begin(), ans.end());
    for (auto i: ans) {
        cout << i.second << endl;
    }
    return 0;
}