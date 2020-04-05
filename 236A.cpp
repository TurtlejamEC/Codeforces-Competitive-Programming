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
    set<char> seen;
    for (char c: s) {
        seen.insert(c);
    }
    cout << ((seen.size() % 2 == 0) ? "CHAT WITH HER!" : "IGNORE HIM!");
    return 0;
}