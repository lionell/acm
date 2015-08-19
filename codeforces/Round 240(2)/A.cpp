/*// PRE-TESTS COMPLETED
#include <cstdio>
#include <cstdlib>
#define MaxN 100

int D[MaxN + 2];

int main()
{
	int n = 0;
	int m = 0;
	scanf("%d%d", &n, &m);
	int l = MaxN + 2;
	int x = 0;
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &x);
		if (x < l)
		{
			for (int j = x; j < l; j++) D[j] = x;
			l = x;
		}
	}
	for (int i = 1; i <= n; i++) printf("%d ", D[i]);
	//system("pause");
	return 0;
}*/