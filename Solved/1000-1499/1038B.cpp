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

int main() {
    int n;
    cin >> n;
    if (n == 1 || n == 2) {
        cout << "No";
    } else {
        cout << "Yes" << endl;
        cout << (n/2) << " ";
        for (int i = 2; i <= n; i += 2) {
            cout << i << " ";
        }
        cout << endl;
        cout << (n/2)+(n%2 == 0 ? 0 : 1) << " ";
        for (int i = 1; i <= n; i += 2) {
            cout << i << " ";
        }
    }
    return 0;
}