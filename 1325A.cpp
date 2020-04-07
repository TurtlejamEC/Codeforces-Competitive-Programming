#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <string>

#define ull unsigned long long;
#define ll long long;

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        if (x == 2) {
            cout << "1 1" << endl; continue;
        } else {
            if (x % 2 == 0) {
                cout << "2 " << (x-2) << endl;
            } else {
                cout << "1 " << (x-1) << endl;
            }
        }
    }
    return 0;
}