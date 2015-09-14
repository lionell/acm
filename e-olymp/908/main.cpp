#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef EOLIMP
    freopen("/home/lionell/Developing/acm/e-olymp/908/in.txt", "r", stdin);
#endif
    int n = 0;
    scanf("%d", &n);
    int s = 0, c = 0;
    for (int i = 0; i < n; ++i) {
        int x = 0;
        scanf("%d", &x);
        if (x > 0 && x % 6 == 0) {
            s += x;
            c++;
        }
    }
    printf("%d %d", c, s);
    printf("\n");
    return 0;
}