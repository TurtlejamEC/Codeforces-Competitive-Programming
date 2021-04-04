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
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string a, b;
        cin >> a >> b;
        vector<int> countA(26), countB(26);
        for (int i = 0; i < n; i++) {
            countA[a[i] - 'a']++;
            countB[b[i] - 'a']++;
        }
        bool possible = true;
        for (int i = 0; i < 26; i++) {
            if (countB[i] > countA[i]) {
                possible = false;
                break;
            }

            if (i < 25) {
                countA[i] -= countB[i];
                countB[i] = 0;
                if (countA[i] % k > 0) {
                    possible = false;
                    break;
                }
                countA[i+1] += countA[i] / k * k;
                countA[i] -= countA[i] / k * k;
            }

            if (countA[i] != countB[i]) {
                possible = false;
                break;
            }

        }

        cout << (possible ? "Yes" : "No") << endl;
    }
    return 0;
}