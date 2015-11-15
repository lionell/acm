// Pretests passed
#include <iostream>

using namespace std;

int GCD(int a, int b) {
	while (b > 0) {
		a = a % b;
		swap(a, b);
	}
	return a;
}

int main() {
	int a = 0;
	int m = 0;
	cin >> a >> m;
	int t = GCD(a, m);
	a /= t;
	m /= t;
	while (m % 2 == 0) m /= 2;
	cout << ((m == 1) ? "Yes" : "No");
	return 0;
}