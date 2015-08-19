#include <iostream>
#define inf 1e10

using namespace std;

long long min(long long a, long long b) {
	return (a < b) ? a : b;
}

long long max(long long a, long long b) {
	return (a > b) ? a : b;
}

int main() {
	int n = 0;
	cin >> n;
	long long minx = inf;
	long long miny = inf;
	long long maxx = -inf;
	long long maxy = -inf;
	long long x = 0;
	long long y = 0;
	for (int i = 0; i < n; ++i) {
		cin >> x >> y;
		minx = min(minx, x);
		miny = min(miny, y);
		maxx = max(maxx, x);
		maxy = max(maxy, y);
	}
	long long answer = max((maxx - minx), (maxy - miny));
	answer *= answer;
	cout << answer;
	return 0;
}