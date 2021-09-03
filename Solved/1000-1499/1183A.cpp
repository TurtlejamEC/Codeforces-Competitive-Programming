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

int sumDigits(int n) {
    int ans = 0;
    while (n) {
        ans += n % 10;
        n /= 10;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    while (sumDigits(n) % 4 != 0) {
        n++;
    }
    cout << n;
    return 0;
}