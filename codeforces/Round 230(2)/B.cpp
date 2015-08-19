/*//FULL SOLUTION
#include <cstdio>
#include <iostream> // Only for system()

typedef float Matrix[200][200];

Matrix W;
Matrix A;
Matrix B;

void Print(Matrix& M, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%0.8f ", M[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%f", &W[i][j]);
			if (i == j) A[i][j] = W[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			A[i][j] = (W[i][j] + W[j][i]) / 2;
			A[j][i] = A[i][j];
			B[i][j] = (W[i][j] - W[j][i]) / 2;
			B[j][i] = -B[i][j];
		}
	}
	Print(A, n);
	Print(B, n);
	//system("pause");
	return 0;
}*/