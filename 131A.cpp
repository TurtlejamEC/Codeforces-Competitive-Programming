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

bool capsLock (string s) {
    for (int i = 1; i < s.size(); i++) {
        if (s[i] >= 'a') {
            return false;
        }
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    if (capsLock(s)) {
        for (char c: s) {
            if (c < 'a') {
                cout << (char)(c + 'a' - 'A');
            } else {
                cout << (char)(c - 'a' + 'A');
            }
        }
    } else {
        cout << s;
    }
    return 0;
}