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
    vector<int> bars(n);
    for (int i = 0; i < n; i++) {
        cin >> bars[i];
    }
    sort(bars.begin(), bars.end());
    int streak = 0;
    int height = 0;
    int total = 0;
    int prev = -1;
    for (int i: bars) {
        if (i == prev) {
            streak++;
        } else {
            if (streak > height) {
                height = streak;
            }
            total++;
            streak = 1;
        }
        prev = i;
    }
    if (streak > height) {
        height = streak;
    }
    cout << height << " " << total;
    return 0;
}