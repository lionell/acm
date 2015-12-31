/*#include <cstdio>
#include <iostream> // Only for system()

inline long int sqr(long int a)
{
	return (a * a);
}

long int Len(int x1, int y1, int x2, int y2)
{
	return ((long int)sqr(x1 - x2) + (long int)sqr(y1 - y2));
}

bool Check(int x, int y, const long int& Radius)
{
	bool d = 0;
	if ((x >= 0) && (y >= 0) && ((Len(0, 0, x + 1, y) > Radius) || (Len(0, 0, x, y + 1) > Radius))) d = 1;
	if ((x <= 0) && (y >= 0) && ((Len(0, 0, x - 1, y) > Radius) || (Len(0, 0, x, y + 1) > Radius))) d = 1;
	if ((x <= 0) && (y <= 0) && ((Len(0, 0, x - 1, y) > Radius) || (Len(0, 0, x, y - 1) > Radius))) d = 1;
	if ((x >= 0) && (y <= 0) && ((Len(0, 0, x + 1, y) > Radius) || (Len(0, 0, x, y - 1) > Radius))) d = 1;
	return d;
}

int main()
{
	int n;
	scanf("%d", &n);
	long int Radius = n * n;
	long int d = 0;
	for (int i = -(n + 1); i <= (n + 1); i++)
	{
		for (int j = -(n + 1); j <= (n + 1); j++)
		{
			if ((Len(0, 0, i, j) <= Radius) && (Check(i, j, Radius)))
			{
				d++;
				//printf("%ld %ld\n", i, j);
			}
		}
	}
	printf("%ld", d);
	//system("pause");
	return 0;
}*/