#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef EOLIMP
    freopen("/home/lionell/Developing/acm/e-olymp/109/in.txt", "r", stdin);
#endif
    int n = 0;
    scanf("%d", &n);
    for (int i = 1; i <= 1001; ++i) {
        int j = i;
        while (j > 0) {
            n--;
            j /= 10;
        }
        if (n == 0) {
            printf("%d", i);
            break;
        } else if (n < 0) {
            printf("0");
            break;
        }
    }
    printf("\n");
    return 0;
}