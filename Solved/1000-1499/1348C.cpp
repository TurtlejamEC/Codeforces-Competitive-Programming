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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        if (s[0] != s[k-1]) {
            cout << s[k-1] << '\n';
            continue;
        }
        cout << s[0];
        if (s[k] == s[n-1]) {
            for (int i = 0; i < ((n-1) - k + 1 + (k-1))/k; i++) {
                cout << s[n-1];
            }
        } else {
            for (int i = k; i < n; i++) {
                cout << s[i];
            }
        }
        cout << '\n';
    }
    return 0;
}