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
    map<string, int> count;
    while(n--) {
        string s;
        cin >> s;
        if (count.find(s) != count.end()) {
            count[s]++;
        } else {
            count[s] = 1;
        }
    }
    string ans;
    int hi = 0;
    for (auto i: count) {
        if (i.second > hi) {
            ans = i.first;
            hi = i.second;
        }
    }
    cout << ans;
    return 0;
}