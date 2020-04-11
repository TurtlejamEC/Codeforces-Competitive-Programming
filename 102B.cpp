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

string sum(string s) {
    int sum = 0;
    for (char c: s) {
        sum += c - '0';
    }
    return to_string(sum);
}


int main() {
    string s;
    cin >> s;

    int count = 0;
    while(s.size() > 1) {
        s = sum(s);
        count++;
    }

    cout << count;
    return 0;
}