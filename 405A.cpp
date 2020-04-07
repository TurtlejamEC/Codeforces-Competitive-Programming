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
    vector<int> col(n);
    for (int i = 0; i < n; i++) {
        cin >> col[i];
    }
    sort(col.begin(), col.end());
    for (int i = 0; i < n; i++) {
        cout << col[i] << " ";
    }
    return 0;
}