#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k, a, b;
	cin >> n >> k >> a >> b;
	char *s = new char[n + 1];
	s[0] = a > b ? 'G' : 'B';
	a -= s[0] == 'G';
	b -= s[0] == 'B';
	int c = 1;
	bool ok = true;
	for (int i = 1; i < n; i++) {
		s[i] = a > b ? 'G' : 'B';
		if (s[i - 1] == s[i]) c++;
		else c = 1;
		if (c > k) {
			s[i] = s[i] == 'G' ? 'B' : 'G';
			c = 1;
		}
		a -= s[i] == 'G';
		b -= s[i] == 'B';
		ok &= a >= 0 && b >= 0;
	}
	s[n] = '\0';
	cout << (ok ? s : "NO");
	return 0;
}
