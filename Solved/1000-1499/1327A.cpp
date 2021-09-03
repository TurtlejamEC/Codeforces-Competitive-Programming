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
    int t;
    cin >> t;
    while (t--) {
        ull n, k;
        cin >> n >> k;
        bool ans = true;
        if (n < k*k) ans = false;
        if (n % 2 == 0 && k%2==1) ans = false;
        if (n%2 == 1 && k%2==0) ans = false;
        cout << (ans ? "YES" : "NO") << endl;
    }
    return 0;
}