/*#include <cstdio>
#include <cstdlib> // system()

#define MaxN 100000

char Stack[MaxN];
int Length;

int main()
{
	char c;
	scanf("%c", &c);
	while (c != '\n')
	{
		if (Length == 0) Stack[++Length] = c;
		else
		{
			if (Stack[Length] == c) Length--;
			else Stack[++Length] = c;
		}
		scanf("%c", &c);
	}
	if (Length == 0) printf("Yes");
	else printf("No");
	//system("pause");
	return 0;
}*/