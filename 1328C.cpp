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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string hi, lo;
        bool placedHi = false;
        for (char c: s) {
            c -= '0';
            if (placedHi) {
                if (c == 2) {
                    hi += '0';
                    lo += '2';
                } else if (c == 1) {
                    hi += '0';
                    lo += '1';
                    placedHi = true;
                } else {
                    hi += '0';
                    lo += '0';
                }
            } else {
                if (c == 2) {
                    hi += '1';
                    lo += '1';
                } else if (c == 1) {
                    hi += '1';
                    lo += '0';
                    placedHi = true;
                } else {
                    hi += '0';
                    lo += '0';
                }
            }
        }
        cout << hi << endl;
        cout << lo << endl;
    }
    return 0;
}