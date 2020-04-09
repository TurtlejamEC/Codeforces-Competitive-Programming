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

#define ull unsigned long long
#define ll long long

using namespace std;

ull gcd(ull a, ull b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    ull l, r;
    cin >> l >> r;
    if (r - l < 2) {
        cout << -1;
    } else {
        bool found = false;
        for (ull a = l; a <= r-2; a++) {
            for (ull b = a+1; b <= r-1; b++) {

                if (gcd(a, b) == 1) {
                    for (ull c = b+1; c <= r; c++) {
                        if (gcd(b, c) == 1 && gcd(a, c) != 1) {
                            cout << a << " " << b << " " << c;
                            found = true;
                            break;
                        }
                    }
                }

                if (found) {
                    break;
                }
            }

            if (found) {
                break;
            }
        }

        if (!found) {
            cout << -1;
        }
    }
    return 0;
}