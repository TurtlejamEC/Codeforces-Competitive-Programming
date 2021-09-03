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
    vector<int> end(5);
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        cin >> end[i];
        sum += end[i];
    }
    if (sum % 5 != 0 || sum == 0)  {
        cout << -1;
    } else {
        cout << sum / 5;
    }
    return 0;
}