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

int solve(int l, int r, int c, string& s) {
    if (l == r) return s[l]-'a' != c;

    int ans = 0;
    int half = (r-l+1)/2;
    vector<int> countLeft(26), countRight(26);
    for (int i = 0; i < half; i++) {
        countLeft[s[l+i]-'a']++;
        countRight[s[l+half+i]-'a']++;
    }
//    int choice = 0;
//    for (int i = c; i < 26; i++) {
//        if (countLeft[i] < countRight[i]) {
//            choice = (i == c ? 1 : 0);
//            break;
//        } else if (countLeft[i] > countRight[i]) {
//            choice = (i == c ? 0 : 1);
//            break;
//        }
//    }
//
//    ans += half-(choice ? countRight[c] : countLeft[c]);
//    if (choice) {
//        ans += solve(l, l+half-1, c+1, s);
//    } else {
//        ans += solve(l+half, r, c+1, s);
//    }
    ans += half + min(-countRight[c] + solve(l, l+half-1, c+1, s), -countLeft[c] + solve(l+half, r, c+1, s));
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << solve(0, n-1, 0, s) << '\n';
    }
    return 0;
}