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
    int n, m;
    cin >> n >> m;
    int i;
    for (i = 1; n > 0; i++) {
        n--;
        if (i%m == 0) n++;
    }
    cout << --i << endl;
    return 0;
}