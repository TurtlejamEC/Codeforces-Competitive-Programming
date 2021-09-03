#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        s[i] = s[i] + ((s[i] < 'a') ? ('a' - 'A') : 0);
    }

    vector<bool> seen(26);
    for (int i = 0; i < s.size(); i++) {
        seen[s[i] - 'a'] = true;
    }

    bool ans = true;
    for (bool b: seen) {
        ans &= b;
    }

    cout << (ans ? "YES" : "NO");

    return 0;
}