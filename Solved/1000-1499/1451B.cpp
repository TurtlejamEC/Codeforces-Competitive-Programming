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
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        while (q--) {
            int l, r;
            cin >> l >> r;
            l--;
            r--;
            bool ans = false;
            for (int i = l-1; i >= 0; i--) {
                if (s[i] == s[l]) {
                    ans = true;
                    break;
                }
            }
            for (int i = r+1; i < n; i++) {
                if (s[i] == s[r]) {
                    ans = true;
                    break;
                }
            }
            cout << (ans ? "YES" : "NO") << endl;
        }
    }
    return 0;
}