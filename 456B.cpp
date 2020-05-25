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
    string s;
    cin >> s;
    int n;
    if (s.size() <= 2) {
        n = stoi(s);
    } else {
        n = stoi(s.substr(s.size()-2));
    }
    if (n % 4) {
        cout << 0;
    } else {
        cout << 4;
    }
    return 0;
}