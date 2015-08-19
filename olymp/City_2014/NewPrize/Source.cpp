//Просте моделювання 
//Складність O(K)
#include <iostream>

using namespace std;

int prizes[3];

int main() {
	int p = 0;
	int k = 0;
	cin >> p >> k;
	prizes[p - 1] = 1;
	int a = 0;
	int b = 0;
	for (int i = 0; i < k; ++i) {
		cin >> a >> b;
		swap(prizes[a - 1], prizes[b - 1]);
	}
	for (int i = 0; i < 3; ++i) if (prizes[i] == 1) cout << i + 1 << endl;
	system("pause");
	return 0;
}