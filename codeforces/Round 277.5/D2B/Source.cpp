//Pretest passed
#include <iostream>

using namespace std;

int compare(const void* a, const void* b) {
	return (*(int*)b - *(int*)a);
}

int main() {
	int n = 0;
	cin >> n;
	int* a = new int[n + 1];
	for (int i = 0; i < n; ++i) cin >> a[i];
	qsort(a, n, sizeof(int), compare);
	a[n] = 0;
	int m = 0;
	cin >> m;
	int* b = new int[m + 1];
	for (int i = 0; i < m; ++i) cin >> b[i];
	qsort(b, m, sizeof(int), compare);
	b[m] = 0;
	int i = 0;
	int j = 0;
	int answer = 0;
	for (int k = 0; ((i < n) && (j < m)); ++k) {
		if (a[i] > b[j]) {
			if (a[i] - b[j] < 2) {
				i++;
				j++;
				answer++;
			}
			else i++;
		}
		else {
			if (b[j] - a[i] < 2) {
				j++;
				i++;
				answer++;
			}
			else j++;
		}
	}
	cout << answer << endl;
	//system("pause");
	return 0;
}