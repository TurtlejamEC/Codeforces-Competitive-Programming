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
    ull ans = 0;
    ull power = 1;
    for (int i = 1; i <= n; i++) {
        power *= 2;
        ans += power;
    }
    cout << ans;
    return 0;
}