#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> lowestPrime(n+1);
    set<int> primes;

    for (int i = 2; i <= n; i++) {
        if (lowestPrime[i] == 0) {
            lowestPrime[i] = i;
            primes.insert(i);
        }

        for (auto j = primes.begin(); j != primes.end() && *j <= lowestPrime[i] && i*(*j) <= n; j++) {
            lowestPrime[i * (*j)] = *j;
        }
    }

    for (int i = 4; i < n; i++) {
        if (primes.find(i) == primes.end() && primes.find(n-i) == primes.end()) {
            cout << i << " " << (n-i);
            break;
        }
    }
    return 0;
}