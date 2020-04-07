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
    for (int i = 0; i <= n; i++) {
        string pad(2*(n-i), ' ');
        cout << pad;
        for (int j = 0; j < i; j++) {
            cout << j << " ";
        }
        for (int j = i; j >=0; j--) {
            cout << j;
            if (j != 0) {
                cout << " ";
            }
        }
        cout << endl;
    }

    for (int i = n-1; i >= 0; i--) {
        string pad(2*(n-i), ' ');
        cout << pad;
        for (int j = 0; j <i; j++) {
            cout << j << " ";
        }
        for (int j = i; j >= 0; j--) {
            cout << j;
            if (j != 0) {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}