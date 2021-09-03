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
    vector<int> sum(3);
    while(n--) {
        int x, y, z;
        cin >> x >> y >> z;
        sum[0] += x;
        sum[1] += y;
        sum[2] += z;
    }
    cout << (sum[0] == 0 && sum[1] == 0 && sum[2] == 0 ? "YES" : "NO");
    return 0;
}