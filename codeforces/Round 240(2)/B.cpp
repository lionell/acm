// FAIL
#include <cstdio>

//int X[100];

void swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}

int gcd(int a, int b)
{
	while (a > 0)
	{
		b = b % a;
		swap(a, b);
	}
	return b;
}

int main()
{
	int n = 0;
	int _a = 0;
	int _b = 0;
	scanf("%d%d%d", &n, &_a, &_b);
	int* X = new int[n];
	int d = gcd(_a, _b);
	long long int a = _a / d;
	long long int b = _b / d;
	for (int i = 0; i < n; i++) scanf("%d", &X[i]);
	for (int i = 0; i < n; i++)
	{
		printf("%I64d ", ((X[i] * a) % b));
	}
	return 0;
}