//Complete
#include <iostream>

using namespace std;

int answers[1001];

int main() {
	int t = 0;
	cin >> t;
	long long a = 0, b = 0, c = 0;
	for (int i = 0; i < t; ++i) {
		cin >> a >> b >> c;
		answers[i] = (((a % 2 == b % 2) && (a % 2 == c % 2)) || 
			(((a == 0) && (b == 0)) && (c != 1)) ||
			(((a == 0) && (c == 0)) && (b != 1)) ||
			(((b == 0) && (c == 0)) && (a != 1))) ? 2 : 1;
	}
	for (int i = 0; i < t; ++i) cout << answers[i];
	return 0;
}