#include <iostream>
#include <algorithm>

using namespace std;

int b[3];

int main() {
	int z = 0;
	cin >> b[0] >> b[1] >> b[2] >> z;
	int Answer = 0;
	if ((z == 0) && ((b[0] + b[1] + b[2]) % 3 != 0)) Answer = -1;
	else {
		sort(b, b + 3);
		int delta = min(b[1] - b[0], b[2] - b[1]);
		//Намагаємося зрівняти a та b або c та b
		if (b[2] - b[0] - delta * 2 < z) Answer = (b[2] - b[0] - z) / 2 + (b[2] - b[0] - z) % 2;
		else {
			int d = abs(b[2] - 2 * b[1] + b[0]);
			Answer = delta + (d - z) / 3 * 2 + (d - z) % 3;
		}
	}
	cout << Answer << endl;
	return 0;
}