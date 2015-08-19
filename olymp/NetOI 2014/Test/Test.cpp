// O(n^3)
#include <iostream>
#include <fstream>

using namespace std;

long long Eval(int n) {
	long long Answer = 0;
	for (int i = 1; i <= n / 4; ++i) {
		for (int j = i; j <= n / 3; ++j) {
			for (int k = j; k <= n / 2; ++k) {
				if (n - i - j - k >= k) Answer++;
			}
		}
	}
	return Answer;
}

int main() {
	ofstream out("counting.txt");
	for (int i = 4000; i < 6000; ++i) {
		out << i << ' ' << Eval(i) << endl;
		if (i % 100 == 0) cout << i << ' ' << Eval(i) << endl;
	}
	return 0;
}