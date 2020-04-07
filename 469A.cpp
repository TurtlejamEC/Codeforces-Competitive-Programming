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
    vector<bool> possible(n+1);
    int p; cin >>p;
    while (p--) {
        int a;
        cin >> a;
        possible[a] = true;
    }
    cin >>p;
    while (p--) {
        int a;
        cin >> a;
        possible[a] = true;
    }
    bool ans = true;
    for (int i = 1; i < possible.size(); i++) {
        ans &= possible[i];
    }
    cout << (ans ? "I become the guy." : "Oh, my keyboard!");
    return 0;
}