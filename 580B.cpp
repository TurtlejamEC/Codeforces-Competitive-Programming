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
    int n, d;
    cin >> n >> d;
    vector< pair<int, int> > friends(n);
    for (int i = 0; i < n; i++) {
        int m, s;
        cin >> m >> s;
        friends[i] = {m, s};
    }

    sort(friends.begin(), friends.end());

    ll ans = 0, currentAns = friends[0].second;
    ll difference = 0;
    int r = 0;
    for (int l = 0; l < n; l++) {
        while (difference < d) {
            ans = max(ans, currentAns);
            r++;
            if (r >= n) break;
            currentAns += friends[r].second;
            difference += friends[r].first - friends[r-1].first;
        }
        currentAns -= friends[l].second;
        if (l < n-1) {
            difference -= friends[l+1].first - friends[l].first;
        }
    }
    cout << ans << endl;
    return 0;
}