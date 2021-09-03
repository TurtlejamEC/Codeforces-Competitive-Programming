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
    int n, t;
    cin >> n >> t;
    vector<int> portal(n);
    for (int i = 0; i < n-1; i++) {
        cin >> portal[i];
    }
    t--;
    int cur = 0;
    while (cur < t) {
        cur += portal[cur];
    }
    cout << (cur == t ? "YES" : "NO");
    return 0;
}