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
    int q;
    cin >> q;
    while (q--) {
        int n, k;
        cin >> n >> k;
        vector<int> odds;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (a % 2 == 1) {
                odds.push_back(i+1);
            }
        }

        if (odds.size() >= k && odds.size() % 2 == k % 2) {
            cout << "YES" << endl;
            for (int i = 0; i < k-1; i++) {
                cout << odds[i] << " ";
            }
            cout << n << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}