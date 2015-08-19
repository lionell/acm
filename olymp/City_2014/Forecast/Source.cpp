//Простий підрахунок відстані та порівняння
//Складність O(1)
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int v = 0;
	int j = 0;
	int r = 0;
	cin >> v >> j >> r;
	int dv = abs(v - r);
	int dj = abs(j - r);
	if (dv < dj) cout << "V" << endl;
	else if (dj < dv) cout << "J" << endl;
	else cout << "D" << endl;
	system("pause");
	return 0;
}