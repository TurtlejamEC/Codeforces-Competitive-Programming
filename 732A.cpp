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
    int k, r;
    cin >> k >> r;
    for (int i = 1; i < 10; i++) {
        int total = i*k;
        if (total % 10 == 0 || total % 10 == r) {
            cout << i;
            break;
        }
    }
    return 0;
}