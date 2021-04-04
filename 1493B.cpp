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

int reverse(int n) {
    return (n%10 == 2 || n%10 == 5 ? ((n%10) == 2 ? 5 : 2) : n%10)*10 + (n/10 == 2 || n/10 == 5 ? ((n/10) == 2 ? 5 : 2) : n/10);
}

bool valid(int n) {
    int tens = n/10;
    int ones = n%10;
    bool validTens = false, validOnes = false;
    validTens |= tens == 0;
    validOnes |= ones == 0;
    validTens |= tens == 1;
    validOnes |= ones == 1;
    validTens |= tens == 2;
    validOnes |= ones == 2;
    validTens |= tens == 5;
    validOnes |= ones == 5;
    validTens |= tens == 8;
    validOnes |= ones == 8;
    return validTens && validOnes;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int h, m;
        cin >> h >> m;
        string time;
        cin >> time;
        int curH = (time[0]-'0')*10+(time[1]-'0'), curM = (time[3]-'0')*10+(time[4]-'0');
        while (!(valid(curH) && valid(curM)) || !(reverse(curH) < m && reverse(curM) < h)) {
            curM++;
            if (curM == m) {
                curH++;
                curM = 0;
            }
            if (curH == h) {
                curH = 0;
            }
        }
        printf("%02d:%02d\n", curH, curM);
    }
    return 0;
}