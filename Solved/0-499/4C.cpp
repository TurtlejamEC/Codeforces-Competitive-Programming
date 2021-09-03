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
    int n;
    cin >> n;
    map<string, int> count;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (count[s] == 0) {
            cout << "OK" << endl;
            count[s]++;
        } else {
            cout << (s + to_string(count[s]++)) << endl;
        }
    }
    return 0;
}