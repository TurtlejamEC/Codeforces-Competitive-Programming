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
    int setSize = 5;
    while (n > setSize) {
        n -= setSize;
        setSize *= 2;
    }
    if (n > setSize / 5 * 4) {
        cout << "Howard";
    } else if (n > setSize / 5 * 3) {
        cout << "Rajesh";
    } else if (n > setSize / 5 * 2) {
        cout << "Penny";
    } else if (n > setSize / 5) {
        cout << "Leonard";
    }else {
        cout << "Sheldon";
    }
    return 0;
}