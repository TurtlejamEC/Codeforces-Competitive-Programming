#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    bool right = true;
    for (int i = 0; i < n; i++) {
        string s;
        if (i % 2 == 0) {
            for (int i = 0; i < m; i++) {
                s += '#';
            }
            cout << s << endl;
        } else {
            if (right) {
                for (int i = 0; i < m-1; i++) {
                    s += '.';
                }
                s += '#';
            } else {
                s += '#';
                for (int i = 0; i < m-1; i++) {
                    s += '.';
                }
            }
            right = !right;
            cout << s << endl;
        }
    }
    return 0;
}