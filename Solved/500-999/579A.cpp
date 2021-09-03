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

#define ull unsigned long long
#define ll long long

using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    while (n) {
        if (n % 2 == 1) {
            n -= 1;
            ans++;
        }

        n /= 2;
    }
    cout << ans;
    return 0;
}