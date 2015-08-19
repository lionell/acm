// O(n^2)
//Complete
#include <iostream>

using namespace std;

int main() {
	int n = 0;
	cin >> n;
	long long answer = 0;
	for (int i = 1; i <= n / 4; ++i) {
		for (int j = i; j <= (n - i) / 3; ++j) {
			answer += (n - i - j) / 2 - j + 1;
		}
	}
	cout << answer << endl;
	return 0;
}