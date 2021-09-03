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
        ull x;
        cin >> x;
        bool answer = false;
        for (ull i = 1; i < 10000; i++) {
            ull make = x - i*i*i;

            if (make < 0) break;

            ull lo = 1;
            ull hi = 10000;
            while (lo <= hi) {
                ull mid = (lo + hi) / 2;
                if (mid*mid*mid == make) {
                    answer = true;
                    break;
                } else if (mid*mid*mid < make) {
                    lo = mid+1;
                } else {
                    hi = mid-1;
                }
            }
            if (answer) break;
        }
//        for (ull i = ceil(cbrt(x)); i <= cbrt(4*x); i++) {
//            if (x % i == 0) {
//                long double mess = sqrt(i*i - 4*(i*i-x/i)/3);
//                if (mess == (ull)mess) {
//                    answer = true;
//                    break;
//                }
//            }
//        }
        cout << (answer ? "YES" : "NO") << endl;
    }
    return 0;
}