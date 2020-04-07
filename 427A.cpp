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
    int n;
    cin >> n;
    int ans = 0;
    int police = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a > 0) {
            police += a;
        } else {
            if (police > 0) {
                police--;
            } else {
                ans++;
            }
        }
    }

    cout << ans;
    return 0;
}