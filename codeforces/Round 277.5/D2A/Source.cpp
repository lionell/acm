//Pretest passed
#include <iostream>

using namespace std;

struct pair {
	int f, t;
} answers[3000];

int main() {
	int n = 0;
	cin >> n;
	int* a = new int[n];
	int c = 0;
	int min = 0;
	for (int i = 0; i < n; ++i) cin >> a[i];
	for (int i = 0; (i < n - 1) && (c < n + 1); ++i) {
		min = i;
		for (int j = i + 1; j < n; ++j) {
			if (a[j] < a[min]) min = j;
		}
		if (min != i) {
			answers[c].f = min;
			answers[c].t = i;
			swap(a[min], a[i]);
			c++;
		}
	}
	if (c < n + 1) {
		cout << c << endl;
		for (int i = 0; i < c; ++i) cout << answers[i].f << " " << answers[i].t << endl;
	}
	else cout << "0";
	delete[] a;
	//system("pause");
	return 0;
}