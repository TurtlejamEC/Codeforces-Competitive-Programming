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
        string s;
        cin >> s;
        int ans = INT_MAX;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                bool isI = true;
                int lookFor = i;
                int tmpAns = 0;
                for (int k = 0; k < s.size(); k++) {
                    if (s[k] == '0'+lookFor) {
                        tmpAns++;
                        isI = !isI;
                        lookFor = isI ? i : j;
                    }
                }
                ans = min(ans, i == j ? ((int)s.size() - tmpAns) : INT_MAX);
                ans = min(ans, tmpAns&1 ? INT_MAX : ((int)s.size() - tmpAns));
            }
        }
        cout << ans << endl;
    }
    return 0;
}