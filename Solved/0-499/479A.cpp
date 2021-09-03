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

#define ull unsigned long long
#define ll long long

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int ans = max(a+b+c, max(a*(b+c), max((a+b)*c, a*b*c)));
    cout << ans;
    return 0;
}