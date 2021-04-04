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

        int ans = 0;
        for (int i = 1; i < s.size(); i++) {
            if (s[i-1] != '#' && s[i-1] == s[i]) {
                s[i] = '#';
                ans++;
            } else if (i >= 2 && s[i-2] != '#' && s[i-2] == s[i]) {
                s[i] = '#';
                ans++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}