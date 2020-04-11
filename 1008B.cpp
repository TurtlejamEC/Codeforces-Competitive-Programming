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
    int n;
    cin >> n;
    int a, b;
    cin >> a >> b;
    int hi = max(a,b);
    for (int i = 1; i < n; i++) {
        int a, b;
        cin >> a >> b;
        int curHi = max(a,b);
        int curLo = min(a,b);
        if (curHi <= hi) {
            hi = curHi;
        } else if (curLo <= hi) {
            hi = curLo;
        } else {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}