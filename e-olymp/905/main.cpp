#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef EOLIMP
    freopen("/home/lionell/Developing/acm/e-olymp/in.txt", "r", stdin);
#endif
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);
    int type = 0;
    if (a == b && b == c) type = 1;
    else if (a == b || a == c || b == c) type = 2;
    else type = 3;
    printf("%d", type);
    printf("\n");
    return 0;
}