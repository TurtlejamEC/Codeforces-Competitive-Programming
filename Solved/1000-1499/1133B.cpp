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

    int n, k;
    cin >> n >> k;
    vector<int> mod(k);
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        mod[a % k]++;
    }
    int ans = mod[0]/2;
    int l = 1, r = k-1;
    while (l < r) {
        ans += min(mod[l], mod[r]);
        l++;
        r--;
    }

    if (l == r) {
        ans += mod[l] / 2;
    }
    cout << ans * 2 << '\n';
    return 0;
}