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
        int n;
        cin >> n;
        vector< pair<int, int> > nums(n);
        vector<int> a(n), b(n);
        bool ordered = true;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i > 0) {
                ordered &= a[i] >= a[i-1];
            }
        }
        int num0 = 0, num1 = 0;
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            if (b[i]) {
                num1++;
            } else {
                num0++;
            }
        }

        cout << ((ordered || (num0 && num1)) ? "Yes" : "No") << endl;
    }
    return 0;
}