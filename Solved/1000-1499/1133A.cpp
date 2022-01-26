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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    int h = (s[0] - '0') * 10 + (s[1] - '0');
    int m = (s[3] - '0') * 10 + (s[4] - '0');
    int time1 = h*60 + m;
    cin >> s;
    h = (s[0] - '0') * 10 + (s[1] - '0');
    m = (s[3] - '0') * 10 + (s[4] - '0');
    int time2 = h*60 + m;

    int finalTime = time1 + abs(time2-time1)/2;
    h = finalTime / 60;
    m = finalTime % 60;
    std::cout << std::setfill('0') << std::setw(2) << h << ':' << std::setfill('0') << std::setw(2) << m << '\n';
    return 0;
}