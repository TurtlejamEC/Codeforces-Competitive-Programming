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
    int x, y;
    cin >> y >> x;
    for (int i = 0; i < y; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < x; j++) {
            if (s[j] == '.') {
                cout << ((i+j)%2 == 0 ? 'B' : 'W');
            } else {
                cout << '-';
            }
        }
        cout << endl;
    }
    return 0;
}