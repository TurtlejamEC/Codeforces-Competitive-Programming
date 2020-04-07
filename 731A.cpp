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
    string s;
    cin >> s;
    int ans = 0;
    int current = 'a';
    for (int i = 0; i < s.size(); i++) {
        int dist = (s[i] - current + 26) % 26;
        ans += min(dist, 26-dist);
        current = s[i];
    }
    cout << ans;
    return 0;
}