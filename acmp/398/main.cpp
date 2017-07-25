#include <bits/stdc++.h>

using namespace std;

int main() {
	int x;
	cin >> x;
	int ans = 0;
	for (int i = 1; i <= x; i++) {
		for (int j = i; i + j <= x; j++) {
			for (int k = j; i + j + k <= x; k++) {
				int t = x - i - j - k;
				ans += t >= k;
				if (t < k) break;
			}
		}
	}
	cout << ans << endl;
}
