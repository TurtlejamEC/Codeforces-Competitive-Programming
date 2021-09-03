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
    ull n, x;
    cin >> n >> x;
    ull ans = 0;
    vector<ull> chapters(n);
    for (int i = 0; i < n; i++) {
        cin >> chapters[i];
    }
    sort(chapters.begin(), chapters.end());

    for (int i = 0; i < n; i++) {
        ans += chapters[i]*x;
        x = max((ull)1, x-1);
    }

    cout << ans << endl;
    return 0;
}