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
    vector<int> months(12);
    for (int i = 0; i < 12; i++) {
        cin >> months[i];
    }
    sort(months.rbegin(), months.rend());
    int ans = 0;
    for (int i: months) {
        if (n > 0) {
            n -= i;
            ans++;
        }
    }
    cout << (n <= 0 ? ans : -1);
    return 0;
}