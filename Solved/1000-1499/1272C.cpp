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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    set<char> use;
    for (int i = 0; i < k; i++) {
        char a;
        cin >> a;
        use.insert(a);
    }
    ull streak = 0;
    ull ans = 0;
    for (char c: s) {
        if (use.find(c) == use.end()) {
            ans += streak*(streak+1)/2;
            streak = 0;
        } else {
            streak++;
        }
    }
    ans += streak*(streak+1)/2;
    cout << ans;

    return 0;
}