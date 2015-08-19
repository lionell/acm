#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef EOLIMP
    freopen("/home/lionell/Developing/acm/e-olymp/in.txt", "r", stdin);
#endif
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);
    int medium = 0;
    if (a >= b && a <= c || a >= c && a <= b) medium = a;
    else if (b >=a && b <= c || b >= c && b <= a) medium = b;
    else medium = c;
    printf("%d", medium);
    printf("\n");
    return 0;
}