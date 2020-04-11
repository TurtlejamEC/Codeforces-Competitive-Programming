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
    if (n == 2) {
        cout << 1 << endl;
        cout << 1;
        return 0;
    } else if (n == 3) {
        cout << 2 << endl;
        cout << 1 << " " << 3;
        return 0;
    } else if (n == 4) {
        cout << 4 << endl;
        cout << 2 << " " << 4 << " " << 1 << " " << 3;
        return 0;
    }
    cout << n << endl;
    for (int i = 1; i <= n; i+= 2) {
        cout << i << " ";
    }
    for (int i = 2; i <= n; i+= 2) {
        cout << i << " ";
    }
    return 0;
}