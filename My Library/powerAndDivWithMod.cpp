#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll mod = 1e9 + 7;

ll power(ll a, ll n) {
	if (n == 1) return a;
	ll b = power(a, n >> 1);
	ll res = (b * b) % mod;
	if (n & 1) res = (res * a) % mod;
	return res;
}

ll divmod(ll a, ll b) { // a div b = a * b^(p-2)
	b = power(b, mod - 2);
	return (a * b) % mod;
} 

int main() {

	return 0;
}