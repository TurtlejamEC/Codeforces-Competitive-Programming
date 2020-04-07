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

int sumDigits(int n) {
    int sum =0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int k;
    cin >> k;
    int count = 0;
    int current = 18;
    while (count < k) {
        current++;
        if (sumDigits(current) == 10) {
            count++;
        }
    }
    cout << current;
    return 0;
}