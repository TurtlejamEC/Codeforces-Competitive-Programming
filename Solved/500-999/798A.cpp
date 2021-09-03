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
    int change = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size()/2; i++) {
        if (s[i] != s[s.size()-1-i]) {
            change++;
        }
    }
    cout << (change == 1 || change == 0 && s.size() % 2 == 1 ? "YES" : "NO");
    return 0;
}