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
    int n;
    cin >> n;
    vector<int> rotations(n);
    for (int i = 0; i < n; i++) {
        cin >> rotations[i];
    }

    for (int i = 0; i < 1<<(n-1); i++) {
        bitset<15> bits(i);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (bits[i]) {
                sum += rotations[i];
            } else {
                sum -= rotations[i];
            }
        }
        if (!sum || sum % 360 == 0) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}