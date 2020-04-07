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

#define ull unsigned long long;
#define ll long long;

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int lessCount = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a <= 5-k) {
            lessCount++;
        }
    }

    cout << lessCount / 3;
    return 0;
}