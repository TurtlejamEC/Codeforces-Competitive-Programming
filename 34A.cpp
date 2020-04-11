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
    vector<int> heights(n);

    for (int i = 0; i < heights.size(); i++) {
        cin >> heights[i];
    }
    int ans = 0;
    for (int i = 1; i < heights.size(); i++) {
        if (abs(heights[i] - heights[(i+1)%n]) < abs(heights[ans] - heights[(ans+1)%n])) {
            ans = i;
        }
    }
    cout << ans + 1  << " " << (ans + 1) % n + 1;
    return 0;
}