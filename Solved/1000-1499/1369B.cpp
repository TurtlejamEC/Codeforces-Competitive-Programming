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
        int n;
        cin >> n;
        string s;
        cin >> s;

        int first1 = -1;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                first1 = i;
                break;
            }
        }

        int last0 = -1;
        for (int i = n-1; i >= 0; i--) {
            if (s[i] == '0') {
                last0 = i;
                break;
            }
        }

        if (first1 == -1 || last0 == -1) {
            cout << s;
        } else if (first1 < last0) {
            for (int i = 0; i < first1; i++) {
                cout << s[i];
            }
            cout << 0;
            for (int i = last0+1; i < n; i++) {
                cout << s[i];
            }
        } else {
            cout << s;
        }

        cout << endl;
    }
    return 0;
}