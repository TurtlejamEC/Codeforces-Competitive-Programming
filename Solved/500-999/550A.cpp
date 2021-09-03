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
    string s;
    cin >> s;
    vector<int> foundAB, foundBA;
    for (int i = 0; i < s.size()-1; i++) {
        if (s[i] == 'A' && s[i+1] == 'B') {
            foundAB.push_back(i);
        } else if (s[i] == 'B' && s[i+1] == 'A') {
            foundBA.push_back(i);
        }
    }

    if (foundAB.empty() || foundBA.empty()) {
        cout << "NO" << endl;
        return 0;
    }

    bool ans = false;
    for (int i: foundBA) {
        if (abs(i-foundAB[0]) > 1) {
            ans = true;
            break;
        }
    }

    for (int i: foundAB) {
        if (abs(i-foundBA[0]) > 1) {
            ans = true;
            break;
        }
    }

    cout << (ans ? "YES" : "NO") << endl;

    return 0;
}