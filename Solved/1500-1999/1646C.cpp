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

int getPowersOfTwo(ull n) {
    int result = 0;
    while (n) {
        result += n&1;
        n >>= 1;
    }
    return result;
}

void fillSums(int originalTier, int tier, int startI, ull sum, vector<ull>& factorials, vector< vector<ull> >& sums) {
    for (int i = startI; i < factorials.size(); i++) {
        if (tier == 1) {
            sums[originalTier].push_back(sum + factorials[i]);
        } else {
            fillSums(originalTier, tier - 1, i + 1, sum + factorials[i], factorials, sums);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector< vector<ull> > sums(15);
    vector<ull> factorials(15);
    factorials[0] = 1;
    for (int i = 1; i < 15; i++) {
        factorials[i] = factorials[i - 1] * i;
    }

    for (int i = 1; i < 15; i++) {
        fillSums(i, i, 1, 0, factorials, sums);
        sort(sums[i].begin(), sums[i].end());
    }

    int t;
    cin >> t;
    while (t--) {
        ull n;
        cin >> n;
        int ans = getPowersOfTwo(n);

        for (int i = 1; i < min(n, 15ULL); i++) {
            int hi = upper_bound(sums[i].begin(), sums[i].end(), n) - sums[i].begin();
            for (int j = 0; j < hi; j++) {
                ans = min(ans, i + getPowersOfTwo(n - sums[i][j]));
            }
        }

        cout << ans << '\n';
    }
    return 0;
}