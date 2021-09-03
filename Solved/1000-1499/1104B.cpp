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
    string s;
    cin >> s;
    stack<char> seen;
    int pairs = 0;
    for (char c: s) {
        if (seen.empty()) {
            seen.push(c);
        } else {
            if (seen.top() == c) {
                pairs++;
                seen.pop();
            } else {
                seen.push(c);
            }
        }
    }

    cout << (pairs % 2 == 0 ? "No" : "Yes");
    return 0;
}