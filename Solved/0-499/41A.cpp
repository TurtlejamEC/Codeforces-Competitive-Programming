#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <map>

using namespace std;

int main() {
    string s;
    cin >> s;
    bool output = true;
    string reversed(s.rbegin(), s.rend());
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        output &= (s[i] == reversed[i]);
    }
    cout << (output ? "YES" : "NO");
    return 0;
}