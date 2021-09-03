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
    int a, b;
    cin >> a >> b;
    int ans = a;
    int burnt = a;
    while (burnt/b > 0) {
        int made = burnt/b;
        ans += made;
        burnt %= b;
        burnt += made;
    }
    cout << ans;
    return 0;
}