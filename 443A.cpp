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
    getline(cin, s);
    set<char> unique;
    for (char c: s) {
        if (c >= 'a' && c <= 'z') {
            unique.insert(c);
        }
    }
    cout << unique.size();
    return 0;
}