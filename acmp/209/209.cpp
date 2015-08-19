// HZ
#include <cstdio>

struct Point
{
	long long int x;
	long long int y;
};

long long int gcd(long long int a, long long int b)
{
	a = (a > 0) ? (a) : (-a);
	b = (b > 0) ? (b) : (-b);
	long long int _t = 0;
	while (a > 0)
	{
		b = b % a;
		_t = a;
		a = b;
		b = _t;
	}
	return b;
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n = 0;
	scanf("%d", &n);
	Point* A = new Point[n + 1];
	for (int i = 0; i < n; i++) scanf("%I64d%I64d", &A[i].x, &A[i].y);
	A[n].x = A[0].x;
	A[n].y = A[0].y;
	n++;
	long long int DSquare = 0;
	long long int k = 0;
	for (int i = 0; i < (n - 1); i++)
	{
		DSquare += ((A[i + 1].x - A[i].x) * (A[i + 1].y + A[i].y));
		k += gcd(A[i + 1].x - A[i].x, A[i + 1].y - A[i].y);
	}
	DSquare = (DSquare > 0) ? (DSquare) : (-DSquare);
	long long int Answer = ((DSquare - k + 2) / 2);
	printf("%I64d", Answer);
	fclose(stdout);
	fclose(stdin);
}