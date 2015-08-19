/*// FULL SOLUTION
#include <cstdio>
//#include <cstdlib> // only for system()

int A[3];

bool Check(int x, int y, int z)
{
	if ((x + y) == z)
	{
		for (int i = 0; i < x; i++) printf("|");
		printf("+");
		for (int i = 0; i < y; i++) printf("|");
		printf("=");
		for (int i = 0; i < z; i++) printf("|");
		return 1;
	}
	else return 0;
}

int main()
{
	char ch = getchar();
	short int i = 0;
	while (ch != '\n')
	{
		if (ch == '|') A[i]++;
		else i++;
		ch = getchar();
	}
	bool d = Check(A[0], A[1], A[2]);
	if (d == 0)
	{
		if (A[0] > 1) d = Check(A[0] - 1, A[1], A[2] + 1);
		else
		{
			if (A[1] > 1) d = Check(A[0], A[1] - 1, A[2] + 1);
		}
		if ((d == 0) && (A[2] > 1)) d = Check(A[0] + 1, A[1], A[2] - 1);
	}
	if (d == 0) printf("Impossible");
	//system("pause");
	return 0;
}*/