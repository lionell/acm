#include <cstdio>
#include <algorithm>

#define DEBUG

bool check(int x, int k, int n, int m, int d) {
    return (x % k == 0) &&
           (x % n == 0) &&
           (x % m == 0) &&
           ((x / k + x / n + x / m) == (x - d));
}

int _gcd(int x, int y) {
    while (y > 0) {
        x = x % y;
        std::swap(x, y);
    }
    return x;
}

int _lcm(int x, int y) {
    return (x * y / _gcd(x, y));
}

int main() {
#ifdef DEBUG
    freopen("/home/lionell/Developing/acm/acmp/677/input.txt", "r", stdin);
#else
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int k = 0, n = 0, m = 0, d = 0;
    scanf("%d%d%d%d", &k, &n, &m, &d);
    if (k * n * m > n * m + k * m + k * n) {
        int x = _lcm(_lcm(k, n), _lcm(n, m));
        int i = 1;
        while (x * i < d) i++;
        printf("%d", x * i);
    }
    else printf("%d", -1);

#ifdef DEBUG
    fclose(stdin);
#else
    fclose(stdin);
    fclose(stdout);
#endif
    return 0;
}