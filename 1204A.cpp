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
    string s;
    cin >> s;
    bool add1 = false;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == '1') {
            add1 = true;
            break;
        }
    }

    cout << (s.size() + (add1 ? 1 : 0))/2;
    return 0;
}