/*// FULL SOLUTION
#include <cstdio>
#include <cstdlib> // system()

void swap(long long int& a, long long int& b)
{
long long int t = a;
a = b;
b = t;
}

int main()
{
long long int a, b;
scanf("%I64d%I64d", &a, &b);
long long int d = ((a == 1) && (b == 1)) ? 1 : 0;
while ((a > 1) || (b > 1))
{
d += (a / b);
a = a % b;
swap(a, b);
}
printf("%I64d", d);
//system("pause");
return 0;
}*/