#include <iostream>
#include <ctime>

using namespace std;

//int min[101];
//int max[101];

int main() {
	int m = 0;
	int s = 0;
	cin >> m >> s;
	int* min = new int[m];
	int* max = new int[m];
	bool fail = 0;
	if (s == 0) {
		if (m == 1) cout << "0 0" << endl;
		else cout << "-1 -1" << endl;
	}
	else {
		int k = s / 9 - (s % 9 == 0);
		//Min
		if (m > k) {
			for (int i = m - 1; i > m - k - 1; --i) min[i] = 9;
			if (m - k > 1) {
				min[0] = 1;
				min[m - k - 1] = (s % 9) - 1;
				for (int i = m - k - 2; i > 0; --i) min[i] = 0;
			}
			else min[0] = (s % 9);
		}
		else fail = 1;
		//Max
		if (m > k) {
			for (int i = 0; i < k; ++i) max[i] = 9;
			max[k] = (s % 9);
		}
		else fail = 1;
		if (!fail)  {
			for (int i = 0; i < m; ++i) cout << min[i];
			cout << " ";
			for (int i = 0; i < m; ++i) cout << max[i];
			cout << endl;
		}
		else cout << "-1 -1" << endl;
	}
	delete[] min;
	delete[] max;
	//system("pause");
	return 0;
}