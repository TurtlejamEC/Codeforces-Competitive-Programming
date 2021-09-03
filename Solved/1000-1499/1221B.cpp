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
    int cur;
    for (int i = 0; i < n; i++) {
        cur = i;
        for (int j = 0; j < n; j++) {
            if ((cur+j) % 2 == 0) {
                cout << "W";
            } else {
                cout << "B";
            }
        }
        cout << endl;
    }
    return 0;
}