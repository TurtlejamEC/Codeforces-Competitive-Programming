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
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        if (n % 2 == 0) {
            if (k > n || (k % 2 == 1 && 2*k > n)) {
                cout << "NO";
            } else if (k % 2 == 1) {
                cout << "YES" << endl;
                for (int i = 0; i < k-1; i++) {
                    cout << 2 << " ";
                }
                cout << n - 2*(k-1);
            } else {
                cout << "YES" << endl;
                for (int i = 0; i < k-1; i++) {
                    cout << 1 << " ";
                }
                cout << n - (k-1);
            }
        } else {
            if (k > n || k % 2 == 0) {
                cout << "NO";
            } else {
                cout << "YES" << endl;
                for (int i = 0; i < k-1; i++) {
                    cout << 1 << " ";
                }
                cout << n - (k-1);
            }
        }
        cout << endl;
    }
    return 0;
}