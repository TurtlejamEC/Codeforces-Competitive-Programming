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
    ll n, m;
    cin >> n >> m;
    vector< pair<int, int> > transitions(n);
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        transitions[i] = {a-b, i};
        sum += a;
    }
    sort(transitions.rbegin(), transitions.rend());
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (sum <= m) break;
        sum -= transitions[i].first;
        ans++;
    }
    cout << (sum <= m ? ans : -1);

    return 0;
}