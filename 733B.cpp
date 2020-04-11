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
    int totalL = 0, totalR = 0;
    int maxBeauty = 0;
    vector< pair<int, int> > soldiers(n);
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        soldiers[i] = {l, r};
        totalL += l;
        totalR += r;
    }
    int ans = 0;
    maxBeauty = max(maxBeauty, abs(totalL - totalR));
    for (int i = 0; i < n; i++) {
        totalL -= soldiers[i].first;
        totalR -= soldiers[i].second;
        totalR += soldiers[i].first;
        totalL += soldiers[i].second;
        if (abs(totalL - totalR) > maxBeauty) {
            ans = i+1;
            maxBeauty = abs(totalL - totalR);
        }
        totalR -= soldiers[i].first;
        totalL -= soldiers[i].second;
        totalL += soldiers[i].first;
        totalR += soldiers[i].second;
    }
    cout << ans;
    return 0;
}