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
        int n;
        cin >> n;
        int num0 = 0, num1 = 0;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                num0++;
            } else {
                num1++;
            }
        }
        if (num0&1 || num1&1 || s[0] == '0' || s[n-1] == '0') {
            cout << "NO" << '\n';
            continue;
        }

        string a, b;
        int flag = 0;
        int seen1 = 0;
        cout << "YES" << '\n';
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                a += flag ? '(' : ')';
                b += flag ? ')' : '(';
                flag ^= 1;
            } else {
                a += seen1 >= num1/2 ? ')' : '(';
                b += seen1 >= num1/2 ? ')' : '(';
                seen1++;
            }
        }
        cout << a << '\n';
        cout << b << '\n';
    }
    return 0;
}