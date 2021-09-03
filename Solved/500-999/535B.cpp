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
#include <bitset>

#define ull unsigned long long
#define ll long long

using namespace std;

int main() {
    int n;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        s[i] = (s[i] == '4' ? '0' : '1');
    }
    int ans = 0;
    int power = 1;
    for (int i = 1; i < s.size(); i++) {
        power *= 2;
        ans += power;
    }
    int add = stoi(s, nullptr, 2)+1;
    cout << ans + add;
    return 0;
}