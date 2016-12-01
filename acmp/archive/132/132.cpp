#include <cstdio>
#include <cstdlib> // system(), qsort()

#define INF 1000000
#define MaxN 100

int Map[MaxN][MaxN]; // Map
int D[MaxN]; // Minimal path
bool Used[MaxN];

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, Start, Finish;
	scanf("%d%d%d", &n, &Start, &Finish);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			scanf("%d", &Map[i][j]);
		}
	}
	for (int i = 1; i <= n; i++) D[i] = INF;
	D[Start] = 0;
	bool b = 1;
	int j, Min;
	while (b)
	{
		// Finding first non-used element
		j = 1;
		while ((Used[j] == 1) && (j <= n)) j++;
		if (j <= n)
		{
			// Finding element with minimal path
			Min = j++;
			while (j <= n)
			{
				if ((Used[j] == 0) && (D[j] < D[Min])) Min = j;
				j++;
			}
			// Relaxing all paths
			for (int i = 1; i <= n; i++)
			{
				if ((Used[i] == 0) && (Map[Min][i] > -1) && (D[i] > (D[Min] + Map[Min][i]))) D[i] = D[Min] + Map[Min][i];
			}
			Used[Min] = 1;
		}
		else b = 0;
	}
	if (D[Finish] != INF) printf("%d", D[Finish]);
	else printf("-1");
	fclose(stdout);
	fclose(stdin);
	system("pause");
	return 0;
}