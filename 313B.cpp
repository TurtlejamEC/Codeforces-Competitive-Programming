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
    string s;
    cin >> s;
    vector<int> prefix(s.size()+1);
    for (int i = 0; i < s.size()-1; i++) {
        prefix[i+1] = prefix[i];
        if (s[i] == s[i+1]) {
            prefix[i+1]++;
        }
    }

    int n;
    cin >> n;
    while (n--) {
        int l, r;
        cin >> l >> r;
        cout << prefix[r-1] - prefix[l-1] << endl;
    }
    return 0;
}