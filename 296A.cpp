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
    vector<int> count(1001);
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        count[a]++;
    }
    for (int i = 1; i <= 1000; i++) {
        if (i > 0 && 2*count[i]-1 > n) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}