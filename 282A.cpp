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
    int x = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        bool plus = true;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '-') {
                plus = false;
            }
        }

        x += ((plus) ? 1 : -1);
    }

    cout << x;
    return 0;
}