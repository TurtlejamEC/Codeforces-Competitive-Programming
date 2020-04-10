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
        string a, b;
        cin >> a >> b;
        bool ans = true;
        int different = 0;
        char diffA = '0', diffB = '0';
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                if (different == 2) {
                    ans = false;
                    break;
                } else if (different == 1 && (diffA != a[i] || diffB != b[i])) {
                    ans = false;
                    break;
                } else {
                    diffA = a[i];
                    diffB = b[i];
                }
                different++;
            }
        }
        if (different == 1) {
            ans = false;
        }
        cout << (ans ? "Yes" : "No") << endl;
    }
    return 0;
}