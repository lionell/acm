/*
 * Author: Ruslan Sakevych
 * Verdict: Accepted
 */

#include <cstdio>
#include <algorithm>

//#define DEBUG

long long _abs(long long a) {
    return ((a < 0) ? -a : a);
}

long long gcd(long long a, long long b) {
    while (b > 0) {
        a %= b;
        std::swap(a, b);
    }
    return a;
}

int main() {
#ifdef DEBUG
    freopen("/home/lionell/Developing/acm/acmp/358/in.txt", "r", stdin);
#else
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    long long x1 = 0, y1 = 0, x2 = 0, y2 = 0, x3 = 0, y3 = 0;
    scanf("%lld%lld%lld%lld%lld%lld", &x1, &y1, &x2, &y2, &x3, &y3);
    long long first = gcd(labs(x2 - x1), labs(y2 - y1));
    long long second = gcd(labs(x3 - x2), labs(y3 - y2));
    long long third = gcd(labs(x1 - x3), labs(y1 - y3));
    long long answer = first + second + third;
    long long c = (x3 - x1) * (y1 - y2) - (y3 - y1) * (x1 - x2);
    if (c == 0) answer = std::max(std::max(first, second), third) + 1;
#ifdef DEBUG
    printf("%lld", answer);
#else
    printf("%I64d", answer);
#endif


#ifdef DEBUG
    fclose(stdin);
#else
    fclose(stdin);
    fclose(stdout);
#endif
    return 0;
}