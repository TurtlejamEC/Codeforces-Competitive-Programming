#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <unordered_map>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    // n, buttons pressed
    unordered_map<int, int> ans;
    // n
    queue<int> next;
    next.push(n);
    ans[n] = 0;
    while (!next.empty()) {
        int cur = next.front();
        next.pop();
        
        if (cur == m) break;

        if (ans.find(cur-1) == ans.end()) {
            ans[cur-1] = ans[cur]+1;
            next.push(cur-1);
        }
        
        if (cur < m) {
            if (ans.find(2*cur) == ans.end()) {
                ans[2*cur] = ans[cur]+1;
                next.push(2*cur);
            }
        }
    }
    
    cout << ans[m];
    return 0;
}