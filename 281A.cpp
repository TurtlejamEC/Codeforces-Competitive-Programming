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
    s[0] = (s[0] > 90) ? (s[0] - 32) : s[0];
    cout << s;
    return 0;
}