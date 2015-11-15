#include <iostream>

using namespace std;

int n,i,j,t,l1,l2;
unsigned long long int a[200000];

int main()
{
	cin >> n;
	if (n%3!=0)
		cout << 0;
	else
	{
		n/=3;
		a[1] = 4;
		l1=8;
		for (i = 2; i<=n; i++)
		{
			if (i==2)
			a[i]=2;
			else 
			{
				a[i]=l1;
				l1*=4;
				l1%=1000000007;
			}
			l2=8;
			for (j = i-1;j>0;j--)
			{
				t = i-j;
				if (t==1)
					a[i]+=4*a[j];
				else if (t==2)
					a[i]+=2*a[j];
				else 
				{
					a[i]+=l2*a[j];
					l2*=4;
					l2%=1000000007;
				}
				a[i]%=1000000007;
			}
		}
		cout << a[n];
	}
	return 0;
}