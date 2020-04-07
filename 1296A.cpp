#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <string>

#define ull unsigned long long;
#define ll long long;

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int evenCount = 0, oddCount = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (a % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }
        cout << ((evenCount && oddCount && n % 2 == 0 || oddCount && n % 2 == 1) ? "YES" : "NO") << endl;
    }
    return 0;
}