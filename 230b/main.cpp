#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MAX_N = 1000000;
vector<bool> is_prime(MAX_N + 1, true);
unordered_set<ll> t_primes;

void preprocess() {
    is_prime[0] = is_prime[1] = false;
    for (ll i = 2; i * i <= MAX_N; i++) {
        if (is_prime[i]) {
            for (ll j = i * i; j <= MAX_N; j += i)
                is_prime[j] = false;
        }
    }

    for (ll i = 2; i <= MAX_N; i++) {
        if (is_prime[i]) {
            t_primes.insert(i * i);
        }
    }
}

int main() {
    preprocess();

    int n;
    cin >> n;

    while (n--) {
        ll x;
        cin >> x;
        cout << (t_primes.count(x) ? "YES" : "NO") << endl;
    }

    return 0;
}
