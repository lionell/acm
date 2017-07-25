#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 100001;

int t[MAX_N];
int dp[MAX_N];

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> t[i];
	}
	dp[0] = 20;
	for (int i = 1; i < n; i++) {
		dp[i] = dp[i - 1] + 20;
		int where = lower_bound(t, t + n, t[i] - 89) - t - 1;
		dp[i] = min(dp[i], dp[where] + 50);
		where = lower_bound(t, t + n, t[i] - 1439) - t - 1;
		dp[i] = min(dp[i], dp[where] + 120);
	}
	cout << dp[0] << endl;
	for (int i = 1; i < n; i++) {
		cout << dp[i] - dp[i - 1] << endl;
	}
	// cerr << dp[n - 1];
	return 0;
}
