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
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(),a.end());

    bool possible = false;
    for (int i = 2; i < a.size(); i++) {
        if (a[i] < a[i-1] + a[i-2]) {
            possible = true;
            break;
        }
    }

    cout << (possible ? "YES" : "NO");
    return 0;
}