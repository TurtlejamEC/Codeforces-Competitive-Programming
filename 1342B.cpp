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

#define ull unsigned long long
#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string ans = "";
        char check = s[0];
        bool allSame = true;
        for (char c: s) {
            if (c != check) {
                allSame = false;
                break;
            }
        }

        if (allSame) {
            cout << s << endl;
            continue;
        }

        ans += check;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i-1]) {
                ans += (s[i] == '0' ? '1' : '0');
            }

            ans += s[i];
        }

        cout << ans << endl;
    }
    return 0;
}