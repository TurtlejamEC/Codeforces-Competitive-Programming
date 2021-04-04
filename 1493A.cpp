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
        int n, k;
        cin >> n >> k;
        vector<int> ans;
        for (int i = (k+1)/2; i <= n; i++) {
            if (i != k)
                ans.push_back(i);
        }
        cout << ans.size() << '\n';
        for (int i : ans) {
            cout << i << " ";
        }
        cout << '\n';
    }
    return 0;
}