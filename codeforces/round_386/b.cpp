#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	string s;
	cin >> n >> s;
	string ans;
	if (n % 2 == 0) {
		for (int i = 0; i < n; i++) {
			if (i % 2 == 0) ans = s[i] + ans;
			else ans = ans + s[i];
		}
	} else {
		for (int i = 0; i < n; i++) {
			if (i % 2 == 1) ans = s[i] + ans;
			else ans = ans + s[i];
		}
	}
	cout << ans;
	return 0;
}
