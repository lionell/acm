//Complete
#include <iostream>

using namespace std;

int main() {
	int n = 0;
	cin >> n;
	n -= 3;
	long long s = 0;
	while (n > 0) {
		s += n;
		n -= 2;
	}
	cout << s << endl;
	//system("pause");
	return 0;
}