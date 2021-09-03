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

typedef unsigned long long ull;
typedef long long ll;

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        vector<int> prefix(n);
        for (int i = 0; i < n; i++) {
            prefix[i] = a[i] == '1';
            if (i > 0)
                prefix[i] += prefix[i-1];
        }
        if (n&1 && a[n-1] != b[n-1]) {
            cout << "NO" << '\n';
            continue;
        }
        int flipped = 0;
        bool possible = true;
        for (int i = n-1-(n&1? 1 : 0); i > 0; i-=2) {
            if (((a[i]-'0'+flipped)%2)==((b[i]-'0')%2) && ((a[i-1]-'0'+flipped)%2)==((b[i-1]-'0')%2))
                continue;
            bool same = prefix[i] == (i+1)/2;
            if (same && ((a[i]-'0'+flipped)%2)^((b[i]-'0')%2) && ((a[i-1]-'0'+flipped)%2)^((b[i-1]-'0')%2)) {
                flipped += 1;
            } else {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << '\n';
    }
    return 0;
}