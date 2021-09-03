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
#include <bitset>

#define ull unsigned long long
#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        if (d <= n) {
            cout << "YES" << endl;
        } else {
            bool ans = false;
            for (int i = 0; i < floor(sqrt(d)); i++) {
                if (i + (d+i)/(i+1) <= n) {
                    ans = true;
                    break;
                }
            }
            cout << (ans ? "YES" : "NO") << endl;
        }
    }
    return 0;
}