#include <bits/stdc++.h>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int k = min(a, min(b / 2, c / 4));
	cout << k * 7;
	return 0;
}
