//O(N^3)
//Complete
#include <iostream>

using namespace std;

const int Inf = 2000000000;

int w[101][101];
int a[101];

int min(int a, int b) {
	return (a < b) ? a : b;
}
int main() {
	int n = 0;
	int m = 0;
	cin >> n >> m;
	for (int i = 0; i < m; ++i) {
		int x = 0;
		int y = 0;
		int s = 0;
		cin >> x >> y >> s;
		w[x][y] = s;
		w[y][x] = s;
	}
	for (int i = 1; i <= n; ++i) cin >> a[i];
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			for (int k = 1; k <= n; ++k)
				w[j][k] = min(w[j][k], w[j][i] + w[i][k]);
		}
	}
	int minEdge = 0;
	long long minAnswer = Inf;
	for (int i = 1; i <= n; ++i) {
		long long answer = 0;
		for (int j = 1; j <= n; ++j) {
			answer += w[i][j] * a[j];
		}
		if (answer < minAnswer) {
			minEdge = i;
			minAnswer = answer;
		}
	}
	cout << minEdge << endl;
	return 0;
}