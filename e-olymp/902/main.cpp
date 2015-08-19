#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef EOLIMP
    freopen("/home/lionell/Developing/acm/e-olymp/in.txt", "r", stdin);
#endif
    int n = 0;
    scanf("%d", &n);
    if (n <= 3) printf("Initial");
    else if (n <= 6) printf("Average");
    else if (n <= 9) printf("Sufficient");
    else printf("High");
    printf("\n");
    return 0;
}