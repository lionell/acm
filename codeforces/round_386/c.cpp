#include <bits/stdc++.h>

using namespace std;

int main() {
	int s, x1, x2;
	cin >> s >> x1 >> x2;
	int t1, t2;
	cin >> t1 >> t2;
	int p, d;
	cin >> p >> d;
	int v = x2 > x1 ? 1 : -1;
	int ans = abs(x2 - x1) * t2;
	int dist;
	if (v == d) {
		if (v == 1 && p > x1) {
			dist = s - p + s + x2;
		} else if (v == 1 && p <= x1) {
			dist = x2 - p;
		} else if (v == -1 && p >= x1) {
			dist = p - x2;
		} else if (v == -1 && p < x1) {
			dist = p + s + s - x2;
		}
	} else {
		if (d == 1) {
			dist = s - p + s - x2;
		} else {
			dist = p + x2;
		}
	}
	int time = dist * t1;
	ans = min(time, ans);
	cout << min(time, ans);
	return 0;
}
