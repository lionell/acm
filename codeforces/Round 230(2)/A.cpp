/*// FULL SOLUTION
#include <iostream> // Only for system()
#include <cstdio>
#include <cstring>

char S[101];
int A[27];

int min(int a, int b)
{
	return (a < b) ? a : b;
}

int main()
{
	scanf("%s", &S);
	int Length = strlen(S);
	for (int i = 0; i < Length; i++) A[S[i] - 97]++;
	int M = INT_MAX;
	M = min(M, (A[13] - 1) / 2); // n
	M = min(M, A[4] / 3); // e
	M = min(M, A[8]); // i
	M = min(M, A[19]); // t
	printf("%d", M);
	//system("pause");
	return 0;
}*/