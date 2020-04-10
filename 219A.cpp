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

#define ull unsigned long long
#define ll long long

using namespace std;

int main() {
    int k;
    cin >> k;
    string s;
    cin >> s;
    vector<int> count(26);
    for (int i = 0; i < s.size(); i++) {
        count[s[i]-'a']++;
    }
    bool possible = true;
    for (int i = 0; i < count.size(); i++) {
        if (count[i] % k != 0) {
            possible = false;
            break;
        }
    }

    if (possible) {
        for (int i = 0; i < k; i++) {
            for (int j = 0; j < count.size(); j++) {
                string repeat(count[j]/k, (char)('a'+j));
                cout << repeat;
            }
        }
    } else {
        cout << -1;
    }

    return 0;
}