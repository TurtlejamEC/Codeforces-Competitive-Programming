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
    int n;
    cin >> n;
    set<int> inc;
    set<int> overflow;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (inc.find(a) == inc.end()) {
            inc.insert(a);
        } else {
            if (overflow.find(a) == overflow.end()) {
                overflow.insert(a);
            } else {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    cout << inc.size() << endl;
    for (int i: inc) {
        cout << i << " ";
    }
    cout << endl;
    cout << overflow.size() << endl;
    for (auto i = overflow.rbegin(); i != overflow.rend(); i++) {
        cout << *i << " ";
    }
    return 0;
}