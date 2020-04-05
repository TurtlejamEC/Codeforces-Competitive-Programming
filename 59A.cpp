#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <map>

using namespace std;

int main() {
    string s;
    cin >> s;
    int lower = 0, upper = 0;
    for (char c: s) {
        if (c < 'a') {
            upper++;
        } else {
            lower++;
        }
    }

    if (upper > lower) {
        for (char c: s) {
            if (c < 'a') {
                cout << c;
            } else {
                cout << (char)(c - ('a' - 'A'));
            }
        }
    } else {
        for (char c: s) {
            if (c < 'a') {
                cout << (char)(c + ('a' - 'A'));
            } else {
                cout << c;
            }
        }
    }
    return 0;
}