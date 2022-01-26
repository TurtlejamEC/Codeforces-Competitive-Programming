#include <bits/stdc++.h>

typedef unsigned long long ull;
typedef long long ll;

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<int> k(1000+1);
    int j = 1;
    for (int i = 1; i <= 1000; i++) {
        while (j % 3 == 0 || j % 10 == 3) {
            j++;
        }
        k[i] = j;
        j++;
    }
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << k[n] << '\n';
        // int n;
        // cin >> n;
        // cout << n + (n/3) + ((n + 7) / 10) - ((n + 27) / 30) << '\n';
    }
    return 0;
}