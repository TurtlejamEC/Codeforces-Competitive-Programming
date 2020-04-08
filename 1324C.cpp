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

#define ull unsigned long long
#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int lastR = -1;
        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'R') {
                ans = max(i - lastR, ans);
                lastR = i;
            }
        }
        ans = max((int)s.size() - lastR, ans);
        cout << ans << endl;
    }
    return 0;
}