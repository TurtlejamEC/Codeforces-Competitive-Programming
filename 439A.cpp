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
    int n, d;
    cin >> n >> d;
    vector<int> songs(n);
    int ans = 0;
    int sum = 0;
    int left = d;
    for (int i = 0; i < n; i++) {
        cin >> songs[i];
        left -= songs[i];
        sum += songs[i] + 10;
    }
    sum -= 10;
    if (sum > d) ans = -1;
    else {
        ans = left/5;
    }
    cout << ans;
    return 0;
}