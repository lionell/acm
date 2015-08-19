#include <iostream>
#include <fstream>

using namespace std;

int n,m,i,f,t,k,p,p1;
unsigned long long s;
int a[100000][3];

int main()
{
	cin >> n >> m;
	memset(a,0,sizeof(a));
	for (i = 0; i<m; i++)
	{
		cin >> f >> t;
		f--;
		t--;
		if (a[f][0]==0)
		{
			a[f][1]=t;
		}
		else 
		{
			a[f][2]=t;
		}
		a[f][0]++;

		if (a[t][0]==0)
		{
			a[t][1]=f;
		}
		else 
		{
			a[t][2]=f;
		}
		a[t][0]++;
	}
	for (i = 0; i<n; i++)
	{
		if (a[i][0]==1)
		{
			t = a[i][1];
			a[i][0]=0;
			p=i;
			while (a[t][0]!=1)
			{
				a[t][0] = 0;
				p1=p;
				p=t;
				t = a[t][1]+a[t][2]-p1;
			}
			a[t][0]=0;
		}
	}
	s = 1;
	for (i = 0; i<n; i++)
	{
		k = 1;
		if (a[i][0]==2)
		{
			t = a[i][1];
			p=i;
			while (t!=i)
			{
				a[t][0] = 0;
				p1=p;
				p=t;
				t = a[t][1]+a[t][2]-p1;
				k++;
			}
			a[t][0]=0;
		}
		s*=k;
		s%=1000000007;
	}
	cout << s;
	return 0;
}