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
    int hi = 10e6;
    vector<int> lowestPrime(hi);
    vector<ull> primes;

    for (int i = 2; i <= hi; i++) {
        if (lowestPrime[i] == 0) {
            lowestPrime[i] = i;
            primes.push_back(i);
        }

        for (int j = 0; j < (int)primes.size() && primes[j] <= lowestPrime[i] && i*primes[j] <= hi; j++) {
            lowestPrime[i * primes[j]] = primes[j];
        }
    }

    vector<ull> tPrimes;
    for (ull i: primes) {
        tPrimes.push_back(i*i);
    }

    int n;
    cin >> n;
    while(n--) {
        ull a;
        cin >> a;
        if (binary_search(tPrimes.begin(), tPrimes.end(), a)) {
            cout << "YES";
        } else {
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}