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
    int inc = 0, dec = 0;
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int drop = n-1;
    for (int i = 0; i < n; i++) {
         if (nums[i] <= nums[(i+1)%n]) {
             inc++;
         } else {
             drop = i;
             dec++;
         }
    }
    if (dec <= 1 || n == 1) {
        cout << n-1-drop;
    } else {
        cout << -1;
    }
    return 0;
}