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
    int streak = 0;
    int best = 0;
    int prev = -1;
    while (n--) {
        int a;
        cin >> a;
        if (a >= prev) {
            streak++;
        } else {
            streak = 1;
        }
        prev = a;
        best = max(streak, best);
    }
    cout << best;
    return 0;
}