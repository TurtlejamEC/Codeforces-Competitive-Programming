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
    ans += n;
    ans += (n-9 > 0 ? n-9 : 0);
    ans += (n-99 > 0 ? n-99 : 0);
    ans += (n-999 > 0 ? n-999 : 0);
    ans += (n-9999 > 0 ? n-9999 : 0);
    ans += (n-99999 > 0 ? n-99999 : 0);
    ans += (n-999999 > 0 ? n-999999 : 0);
    ans += (n-9999999 > 0 ? n-9999999 : 0);
    ans += (n-99999999 > 0 ? n-99999999 : 0);
    ans += (n-999999999 > 0 ? n-999999999 : 0);
    cout << ans << endl;
    return 0;
}