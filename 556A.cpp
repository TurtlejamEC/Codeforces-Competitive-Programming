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
    string s;
    cin >> s;
    vector<int> count(2);
    int pairs = 0;
    for (char c: s) {
        int num = c - '0';
        if (count[!num]) {
            pairs++;
            count[!num]--;
        } else {
            count[num]++;
        }
    }
    cout << n - pairs*2;
    return 0;
}