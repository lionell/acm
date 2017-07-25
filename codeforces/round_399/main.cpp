#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 1001;
int a[MAX_N];
int b[MAX_N];

int main() {
	int n, k, x;
	cin >> n >> k >> x;
	int *c = a, *d = b;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		a[t]++;
	}
	bool tick = true;
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < MAX_N; j++) {
			if (c[j]) {
				d[j ^ x] += c[j] / 2 + (c[j] % 2) * tick;
				d[j] += c[j] / 2 + (c[j] % 2) * !tick;
				tick = (c[j] % 2 ? !tick : tick);
			}
		}
		swap(c, d);
		memset(d, 0, MAX_N * sizeof(int));
	}
	int min = -1, max = -1;
	for (int i = 0; i < MAX_N; i++) {
		if (min == -1 && c[i]) min = i;
		if (c[i]) max = i;
	}
	cout << max << " " << min;
	return 0;
}
