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
    vector<int> ring(2*n+1);
    bool lToR = true;
    for (int i = 1; i <= 2*n; i += 2) {
        int leftIndex = (i-1)/2+1;
        if (lToR) {
            ring[leftIndex] = i;
            ring[leftIndex+n] = i+1;
        } else {
            ring[leftIndex] = i+1;
            ring[leftIndex+n] = i;
        }
        lToR = !lToR;
    }
    if (n % 2 == 0) {
        cout << "NO";
    } else {
        cout << "YES" << endl;
        for (int i = 1; i < ring.size(); i++) {
            cout << ring[i] << " ";
        }
    }
    return 0;
}