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

typedef unsigned long long ull;
typedef long long ll;

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    if (s.size() < 3) {
        cout << "Just a legend" << '\n';
        return 0;
    }

    int start = 0;
    vector<int> match(s.size());
    int i = 1;
    int len = 0;

    // kmp preprocessing, find longest prefix
    while (i < s.size()) {
        if (s[len] == s[i]) {
            len++;
            match[i] = len;
            i++;
        } else {
            if (len == 0) {
                match[i] = 0;
                i++;
            } else {
                len = match[len - 1];
            }
        }
    }

    if (match[s.size() - 1] == 0) {
        cout << "Just a legend" << '\n';
        return 0;
    }

    bool found = false;
    for (int i = 1; i < s.size() - 1; i++) {
        if (match[i] == match[s.size() - 1]) {
            found = true;
            break;
        }
    }

    if (found) {
        for (int i = 0; i < match[s.size() - 1]; i++) {
            cout << s[i];
        }
        cout << '\n';
    } else {
        if (match[match[s.size() - 1] - 1]) {
            for (int i = 0; i < match[match[s.size() - 1] - 1]; i++) {
                cout << s[i];
            }
            cout << '\n';
        } else {
            cout << "Just a legend" << '\n';
        }
    }

    return 0;
}