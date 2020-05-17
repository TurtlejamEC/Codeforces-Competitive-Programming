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

#define ull unsigned long long
#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<bool> princess(n+1);
        vector<bool> prince(n+1);
        int openPrincess = -1;
        for (int i = 1; i <= n; i++) {
            int want;
            cin >> want;
            for (int j = 0; j < want; j++) {
                int a;
                cin >> a;
                if (!princess[i] && !prince[a]) {
                    princess[i] = true;
                    prince[a] = true;
                }
            }
            if (!princess[i]) {
                openPrincess = i;
            }
        }

        int match = -1;
        if (openPrincess != -1) {
            for (int i = 1; i <= n; i++) {
                if (!prince[i]) {
                    match = i;
                }
            }
        }

        if (match == -1) {
            cout << "OPTIMAL" << endl;
        } else {
            cout << "IMPROVE" << endl;
            cout << openPrincess << " " << match << endl;
        }
    }
    return 0;
}