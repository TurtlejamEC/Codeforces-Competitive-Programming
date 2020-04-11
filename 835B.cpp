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
#include <bitset>

#define ull unsigned long long
#define ll long long

using namespace std;

int main() {
    int k;
    cin >> k;
    string s;
    cin >> s;
    vector<int> digits;
    int sum = 0;
    for (char c: s) {
        digits.push_back(c-'0');
        sum += c-'0';
    }
    if (sum >= k) {
        cout << 0;
        return 0;
    }
    sort(digits.begin(), digits.end());
    int i;
    for (i = 0; i < digits.size(); i++) {
        sum += 9-digits[i];
        if (sum >= k) {
            break;
        }
    }
    cout << i+1;
    return 0;
}