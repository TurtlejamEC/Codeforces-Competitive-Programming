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
    while (true) {
        n++;
        set<int> digits;
        string s = to_string(n);
        for (char c: s) {
            digits.insert(c);
        }

        if (digits.size() == s.size()) {
            cout << s;
            break;
        }
    }
    return 0;
}