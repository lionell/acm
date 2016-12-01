/*
 * Author: Ruslan Sakevych
 * Verdict: Accepted
 */

#include <cstdio>
#include <algorithm>

//#define DEBUG
    
int gcd(int a, int b) {
    while (b > 0) {
        a = a % b;
        std::swap(a, b);
    }
    return a;
}

int main() {
#ifdef DEBUG
    freopen("/home/lionell/Developing/acm/acmp/319/in.txt", "r", stdin);
#else
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    printf("%d", gcd(abs(x2 - x1), abs(y2 - y1)) + 1);

#ifdef DEBUG
    fclose(stdin);
#else
    fclose(stdin);
    fclose(stdout);
#endif
    return 0;
}