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
    bool output = false;
    for (char c: s) {
        output = output || (c == 'H' || c == 'Q' || c == '9');
    }
    cout << (output ? "YES" : "NO");
    return 0;
}