#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("/home/lionell/Developing/acm/codeforces/round_311/in.txt", "r", stdin);
#endif
    int n = 0, min1 = 0, max1 = 0, min2 = 0, max2 = 0, min3 = 0, max3 = 0;
    scanf("%d %d %d %d %d %d %d", &n, &min1, &max1, &min2, &max2, &min3, &max3);
    int first = min1; n -= min1;
    int second = min2; n -= min2;
    int third = min3; n -= min3;
    int d = min(max1 - min1, n);
    first += d; n -= d;
    d = min(max2 - min2, n);
    second += d; n -= d;
    d = min(max3 - min3, n);
    third += d; n -= d;
    printf("%d %d %d", first, second, third);
    return 0;
}