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
    string s;
    cin >> s;
    map<char, int> count;
    for (char c: s) {
        if (count.find(c) == count.end()) {
            count[c] = 1;
        } else {
            count[c]++;
        }
    }
    cout << min(count['B'], min(count['u']/2, min(count['l'], min(count['b'], min(count['a']/2, min(count['s'], count['r']))))));
    return 0;
}