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

    int t;
    cin >> t;
    while (t--) {
        string keyboard;
        cin >> keyboard;
        map<char, int> key;
        for (int i = 0; i < keyboard.size(); i++) {
            key[keyboard[i]] = i;
        }

        string s;
        cin >> s;
        int ans = 0;
        for (int i = 1; i < s.size(); i++) {
            ans += abs((key[s[i]] - key[s[i-1]]));
        }
        cout << ans << '\n';
    }
    return 0;
}