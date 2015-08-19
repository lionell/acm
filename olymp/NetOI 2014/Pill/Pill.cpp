//O(log2(max(t[i]) - min(t[i])) * N)
//Max time found: 34ms
//Complete
#include <iostream>

using namespace std;

const int Inf = 2000000000;

int t[100000];
int n = 0;

long long Eval(int x) {
	long long result = 0;
	for (int i = 0; i < n; ++i) {
		result += abs(t[i] - x);
	}
	return result;
}

int main() {
	cin >> n;
	int min = Inf;
	int max = -Inf;
	for (int i = 0; i < n; ++i) {
		cin >> t[i];
		if (t[i] < min) min = t[i];
		if (t[i] > max) max = t[i];
	}
	int l = min;
	int r = max;
	while (r - l > 1) {
		int m = (r + l) / 2;
		if (Eval(m + 1) < Eval(m)) l = m;
		else r = m;
	}
	long long answer = Eval(r);
	cout << answer << endl;
	return 0;
}