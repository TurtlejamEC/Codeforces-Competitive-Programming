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

#define ull unsigned long long;
#define ll long long;

using namespace std;

bool contains47(int n) {
    while (n) {
        if (!(n % 10 == 4 || n % 10 == 7)) {
            return false;
        }

        n /= 10;
    }
    return true;
}

int main() {
    set<int> luckyNumbers;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (contains47(i)) {
            luckyNumbers.insert(i);
        }
    }

    bool yes = false;
    for (int i: luckyNumbers) {
        yes |= (n % i == 0);
    }

    cout << (yes ? "YES" : "NO") << endl;

    return 0;
}