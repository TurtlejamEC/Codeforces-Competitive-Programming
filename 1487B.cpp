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
        k--;
        if (n % 2 == 0) {
            cout << (k % n) + 1 << endl;
            continue;
        }

        ull collisionTime = n/2;
        ull collisions = k / collisionTime;
        ull collisionPos = 0;
        int currentCollisions = 0;
        collisionPos = (collisionTime + (collisions-1)*(collisionTime+1)) % n;
//        while (currentCollisions < collisions) {
//            if (currentCollisions == 0) {
//                collisionPos = collisionTime;
//            } else {
//                collisionPos = (collisionPos + collisionTime + 1) % n;
//            }
//            currentCollisions++;
//        }
        if (collisions > 0) {
            cout << (collisionPos + 1 + k % collisionTime) % n + 1 << endl;
        } else {
            cout << (k % n) + 1 << endl;
        }
    }
    return 0;
}