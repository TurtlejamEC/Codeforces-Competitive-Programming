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
#include <bitset>

#define ull unsigned long long
#define ll long long

using namespace std;

int main() {
    int n;
    cin >> n;
    bool special = false;
    if (n >= 10) {
        if (n == 10) {
            cout << "ten";
            return 0;
        } else if (n == 11) {
            cout << "eleven";
            return 0;
        } else if (n == 12) {
            cout << "twelve";
            return 0;
        } else if (n == 13) {
            cout << "thirteen";
            return 0;
        } else if (n == 14) {
            cout << "fourteen";
            return 0;
        } else if (n == 15) {
            cout << "fifteen";
            return 0;
        } else if (n == 16) {
            cout << "sixteen";
            return 0;
        } else if (n == 17) {
            cout << "seventeen";
            return 0;
        } else if (n == 18) {
            cout << "eighteen";
            return 0;
        } else if (n == 19) {
            cout << "nineteen";
            return 0;
        } else if (20 <= n && n < 30) {
            cout << "twenty";
        } else if (30 <= n && n < 40) {
            cout << "thirty";
        } else if (40 <= n && n < 50) {
            cout << "forty";
        } else if (50 <= n && n < 60) {
            cout << "fifty";
        } else if (60 <= n && n < 70) {
            cout << "sixty";
        } else if (70 <= n && n < 80) {
            cout << "seventy";
        } else if (80 <= n && n < 90) {
            cout << "eighty";
        } else if (90 <= n) {
            cout << "ninety";
        }

        if (n % 10 == 0) {
            return 0;
        } else {
            cout << '-';
        }
    }

    if (n % 10 == 0) {
        cout << "zero";
    } else if (n % 10 == 1) {
        cout << "one";
    } else if (n % 10 == 2) {
        cout << "two";
    } else if (n % 10 == 3) {
        cout << "three";
    } else if (n % 10 == 4) {
        cout << "four";
    } else if (n % 10 == 5) {
        cout << "five";
    } else if (n % 10 == 6) {
        cout << "six";
    } else if (n % 10 == 7) {
        cout << "seven";
    } else if (n % 10 == 8) {
        cout << "eight";
    } else if (n % 10 == 9) {
        cout << "nine";
    }
    return 0;
}