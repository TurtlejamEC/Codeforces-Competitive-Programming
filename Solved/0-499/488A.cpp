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

bool has8(int n) {
    n = abs(n);
    while (n) {
        if (n % 10 == 8) {
            return true;
        }

        n /= 10;
    }
    return false;
}

int main() {
    int a;
    cin >> a;
    int i;
    for (i = 1; i <= 100; i++) {
        if (has8(a+i)) {
            cout << i;
            return 0;
        }
    }
    return 0;
}