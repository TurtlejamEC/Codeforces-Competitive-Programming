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

int calculateSum(string s) {
    int sum = 0;
    for (char c: s) {
        sum += c - '0';
    }
    return sum;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        s = '0' + s;
        int sum;
        cin >> sum;
        int currentSum = calculateSum(s);
        if (currentSum <= sum) {
            cout << 0 << endl;
            continue;
        }

        string sCopy(s);
        for (int i = s.size()-1; i > 0; i--) {
            ull currentNum = stoull(sCopy);
            ull multiplier = 1;
            for (int j = i; j < s.size()-1; j++) {
                multiplier *= 10;
            }
            currentNum += (10 - (sCopy[i] - '0')) * multiplier;
            sCopy = to_string(currentNum);
            if (sCopy.size() != s.size()) {
                sCopy = '0' + sCopy;
            }
            currentSum = calculateSum(sCopy);
            if (currentSum <= sum) {
                break;
            }
        }
        cout << (stoull(sCopy) - stoull(s)) << endl;
    }
    return 0;
}