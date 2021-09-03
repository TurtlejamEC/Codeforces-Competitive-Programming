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
    int n, k;
    cin >> n >> k;
    vector<int> days(n);
    for (int i = 0; i < n; i++) {
        cin >> days[i];
    }
    vector<int> sum(n);
    sum[0] =  days[0];
    for (int i = 1; i < n; i++) {
        sum[i] = days[i-1] + days[i];
    }
    int ans = 0;
    for (int i = 1; i < n; i++) {
        if (sum[i] < k) {
            ans += k-sum[i];
            days[i] += k-sum[i];
            if (i < n-1) {
                sum[i+1] += k-sum[i];
            }
            sum[i] = k;
        }
    }
    cout << ans << endl;
    for (int i: days) {
        cout << i << " ";
    }

    return 0;
}