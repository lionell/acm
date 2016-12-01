#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef EOLIMP
    freopen("/home/lionell/Developing/acm/e-olymp/911/in.txt", "r", stdin);
#endif
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);
    int D = b * b - 4 * a * c;
    if (D > 0) {
        int D_root = (int)sqrt((double)D);
        int one = (-b + D_root) / (2 * a);
        int two = (-b - D_root) / (2 * a);
        printf("Two roots: %d %d", min(one, two), max(one, two));
    } else if (D == 0)
        printf("One root: %d", -b / (2 * a));
    else
        printf("No roots");
    printf("\n");
    return 0;
}