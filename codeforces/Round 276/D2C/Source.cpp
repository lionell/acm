#include <iostream>
#define bits 60

using namespace std;

int L[bits];
int R[bits];
long long answers[10001];

void ToBin(long long d, int* b) {
	int i = bits - 1;
	while (d > 0) {
		b[i--] = d % 2;
		d /= 2;
	}
}

long long ToDec(int* b) {
	long long t = 1;
	long long answer = 0;
	for (int i = bits - 1; i >= 0; --i) {
		if (b[i]) answer += t;
		t = t * 2;
	}
	return answer;
}

int main() {
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		long long l = 0;
		long long r = 0;
		cin >> l >> r;
		++r;
		memset(L, 0, sizeof(L));
		memset(R, 0, sizeof(R));
		ToBin(l, L);
		ToBin(r, R);
		int j = 0;
		while (L[j] == R[j]) ++j;
		R[j] = 0;
		for (int k = j + 1; k < bits; k++) R[k] = 1;
		answers[i] = ToDec(R);
	}
	for (int i = 0; i < n; ++i) cout << answers[i] << endl;
	return 0;
}