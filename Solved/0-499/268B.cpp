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
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i < n; i++) {
        ans += i*(n-i);
    }
    ans += n;
    cout << ans;
    return 0;
}