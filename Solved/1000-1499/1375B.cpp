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
        int n, m;
        cin >> n >> m;
        bool possible = true;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int a;
                cin >> a;
                if (i == 0 && j == 0 || i == n-1 && j == m-1 || i == 0 && j == m-1 || i == n-1 && j == 0) {
                    possible &= a <= 2;
                }

                if (i == 0 || i == n-1) {
                    possible &= a <= 3;
                }

                if (j == 0 || j == m-1) {
                    possible &= a <= 3;
                }

                possible &= a <= 4;
            }
        }

        if (possible) {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++) {
                if (i == 0 || i == n-1) {
                    cout << "2 ";
                    for (int j = 0; j < m-2; j++) {
                        cout << "3 ";
                    }
                    cout << "2";
                } else {
                    cout << "3 ";
                    for (int j = 0; j < m-2; j++) {
                        cout << "4 ";
                    }
                    cout << "3";
                }
                cout << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}