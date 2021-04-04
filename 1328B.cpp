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
        k--;
        int jump = 1;
        while (k >= jump) {
            k -= jump;
            jump++;
        }
        string ans(n, 'a');
        ans[n-1-jump] = 'b';
        ans[n-1-k] = 'b';
        cout << ans << endl;
    }
    return 0;
}