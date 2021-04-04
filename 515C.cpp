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
    int len;
    cin >> len;
    string n;
    cin >> n;
    vector<int> digits;
    for (int i = 0; i < n.size(); i++) {
        for (int j = n[i] - '0'; j >= 2; j--) {
            if (j == 9) {
                digits.push_back(3);
                digits.push_back(3);
                digits.push_back(2);
                digits.push_back(7);
                break;
            } else if (j == 8) {
                digits.push_back(2);
                digits.push_back(2);
                digits.push_back(2);
            } else if (j == 6) {
                digits.push_back(3);
            } else if (j == 4) {
                digits.push_back(2);
                digits.push_back(2);
            } else {
                digits.push_back(j);
                break;
            }
        }
    }
    sort(digits.rbegin(), digits.rend());
    for (int i: digits) {
        cout << i;
    }
    cout << endl;

    return 0;
}