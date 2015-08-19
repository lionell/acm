#include <iostream>

using namespace std;

int answers[1001];

int main() {
	int t = 0;
	cin >> t;
	int a = 0;
	int b = 0;
	for (int i = 0; i < t; ++i) {
		cin >> a >> b;
		answers[i] = (a % 2 == 0) ? 1 : 2;
	}
	for (int i = 0; i < t; ++i) {
		cout << answers[i];
	}
	return 0;
	//system("pause");
}