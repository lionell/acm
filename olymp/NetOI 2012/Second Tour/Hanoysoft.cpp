#include <iostream>

using namespace std;

int n,a,b,i;

unsigned long long r;

int main()
{
	cin >> n >> a >> b;
	r = 1;
	for (i = 1; i<n; i++)
	{
		r = r * 3 + 1;
		r%=1000000007;
	}
	if (a+b==4)
	{
		r*=2;
		r%=1000000007;
	}
	cout << r;
	return 0;
}