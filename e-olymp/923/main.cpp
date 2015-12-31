#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef EOLIMP
    freopen("/home/lionell/Developing/acm/e-olymp/923/in.txt", "r", stdin);
#endif
    int n = 0;
    scanf("%d", &n);
    if (n <= 2) printf("Winter");
    else if (n <= 5) printf("Spring");
    else if (n <= 8) printf("Summer");
    else if (n <= 11) printf("Autumn");
    else printf("Winter");
    printf("\n");
    return 0;
}