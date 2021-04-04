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
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++) {
            if (i&1) {
                for (int j = 25; j >= 0; j--) {
                    if (s[i] != 'a'+j) {
                        s[i] = 'a'+j;
                        break;
                    }
                }
            } else {
                for (int j = 0; j < 26; j++) {
                    if (s[i] != 'a'+j) {
                        s[i] = 'a'+j;
                        break;
                    }
                }
            }
        }

        cout << s << endl;
    }
    return 0;
}