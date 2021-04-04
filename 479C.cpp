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
    int n;
    cin >> n;
    vector< pair<int, int> > tests(n);
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        tests[i] = {a, b};
    }

    sort(tests.begin(), tests.end());

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (tests[i].second >= ans) {
            ans = tests[i].second;
        } else {
            ans = tests[i].first;
        }
    }

    cout << ans << endl;
    return 0;
}