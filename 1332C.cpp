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

void dfs(int current, int id, int k, string& s, vector<int>& frequency, vector<int>& group) {
    group[current] = id;
    frequency[s[current]-'a']++;

    if (!group[(current + k) % group.size()]) {
        dfs((current + k) % group.size(), id, k, s, frequency, group);
    }

    if (!group[group.size() - 1 - current]) {
        dfs(group.size() - 1 - current, id, k, s, frequency, group);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> group(n);
        vector< vector<int> > frequency(1);
        int id = 1;
        for (int i = 0; i < n; i++) {
            if (!group[i]) {
                frequency.push_back(vector<int>(26));
                dfs(i, id, k, s, frequency[id], group);
                id++;
            }
        }
        vector<int> make(frequency.size());
        for (int i = 1; i < make.size(); i++) {
            int hi = 0;
            for (int j = 1; j < 26; j++) {
                if (frequency[i][j] > frequency[i][hi]) {
                    hi = j;
                }
            }
            make[i] = hi;
        }
        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            ans += s[i]-'a' != make[group[i]];
        }
        cout << ans << endl;
    }
    return 0;
}