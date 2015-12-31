//Not full solution
#include <iostream>
#include <cmath>

using namespace std;

long long a = 0;

double Eval(double x) {
	return ((a - 2 * x) * (a - 2 * x) * x);
}

int main() {
	cin >> a;
	long long answer = (Eval(floor(a / 6.0L)) - Eval(ceil(a / 6.0L)) > 1e-15) ? (long long)(floor(a / 6.0L)) : (long long)(ceil(a / 6.0L));
	cout << answer << endl;
	//system("pause");
	return 0;
}