#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int n,i,t,Max,k;
unsigned long long r;
int a[100010];

int main()
{
	/*fstream in;
	char *s = "20";
	in.open(s,ios::in);
	fstream out;
	char s1[10];
	sprintf(s1,"%s.b",s);
	out.open(s1,ios::out);*/
	cin >> n;
	Max = 0;
	memset(a,sizeof(a),0);
	for (i = 0;i<n;i++)
	{
		cin >> t;
		a[t]++;
		if (a[t]>Max)
		{
			Max = a[t];
		}
	}
	if (n-Max+1<n/2)
		k = n-Max+1;
	else 
		k = n/2;
	r = 0;
	for (i = 100000;i>0;i--)
	{
		if (a[i]>k)
		{
			r+=k*i;
			k=0;
		}
		else
		{
			r+=a[i]*i;
			k-=a[i];
		}
	}
	cout << r << endl;
	return 0;
}