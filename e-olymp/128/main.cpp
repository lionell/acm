#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef EOLIMP
    freopen("/home/lionell/Developing/acm/e-olymp/128/in.txt", "r", stdin);
#endif
    int n = 0;
    scanf("%d", &n);
    int c = 0;
    for (int i = 0; i < 1000; ++i) {
        int j = i;
        int s = 0;
        while (j > 0) {
            s += j % 10;
            j /= 10;
        }
        if (s == n) c++;
    }
    printf("%d", c * c);
    printf("\n");
    return 0;
}