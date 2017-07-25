#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const int MAX_N = 100001;

ll calc(ll n, ll s, ll x) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	ll m = s / 2 + 1;
	if (x < m) return calc(n / 2, (s - 1) / 2, x);
	else if (x == m) return n / 2 + n % 2;
	else if (x > m) return n - calc(n / 2, (s - 1) / 2, (s - 1) / 2 - (x - m));
}

int main() {
	ll n, l, r;
	cin >> n >> l >> r;
	ll a = 1;
	ll b = 1;
	while (a <= n) {
		a <<= 1;
		b = 2 * b + 1;
	}
	b = (b - 1) / 2;
	ll m = b / 2 + 1;
	cout << n - calc(n, b, l - 1) - calc(n, b, b - r);
	return 0;
}
