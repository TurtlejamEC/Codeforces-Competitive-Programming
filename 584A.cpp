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
    string ans;
    if (t < 10) {
        string s(n, t+'0');
        ans = s;
    } else {
        if (n == 1) {
            ans = "-1";
        } else {
            ans += '1';
            string s(n-1, '0');
            ans += s;
        }
    }

    cout << ans;
    return 0;
}