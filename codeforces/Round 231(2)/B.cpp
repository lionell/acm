// NOT CHECKED
#include <cstdio>
#include <cstdlib> // only for system()
#include <cstring> // only for memset()

int main()
{
	int p = 0;
	int x = 0;
	scanf("%d%d", &p, &x);
	int* A = new int[p + 1];
	int* B = new int[p + 1];
	bool GoOn = 1;
	int _i = 1;
	while ((_i < 10) && (GoOn))
	{
		memset(A, 0, sizeof(int) * (p + 1));
		memset(B, 0, sizeof(int) * (p + 1));
		A[0] = _i;
		for (int j = 0; j < p; j++)
		{
			B[j] += (A[j] * x);
			B[j + 1] = B[j] / 10;
			B[j] %= 10;
			A[j + 1] = B[j];
		}
		if (B[p] == 0) GoOn = 0;
		_i++;
	}
	if (GoOn == 0)
	{
		for (int i =  (p - 1); i >= 0; i--) printf("%d", A[i]);
	}
	else printf("Impossible");
	//system("pause");
	return 0;
}