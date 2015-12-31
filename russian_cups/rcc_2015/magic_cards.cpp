//
// Created by lionell on 3/28/15.
//

#include <cstdio>
#include <algorithm>

int main() {
    int t = 0;
    scanf("%d", &t);
    bool *answer = new bool[t]();
    for (int j = 0; j < t; ++j) {
        int n = 0, l = 0;
        scanf("%d%d", &n, &l);
        int *a = new int[n]();
        for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
        int *b = new int[n]();
        for (int i = 0; i < n; ++i) scanf("%d", &b[i]);
        std::sort(a, a + n, std::less<int>());
        std::sort(b, b + n, std::greater<int>());
        int sum1 = 0;
        int sum2 = 0;
        for (int i = 0; i < l; ++i) {
            sum1 += a[i];
            sum2 += b[i];
        }
        answer[j] = (sum1 > sum2);
        delete[] a;
        delete[] b;
    }
    for (int i = 0; i < t; ++i) printf((answer[i]) ? "YES\n" : "NO\n");
    delete[] answer;
    return 0;
}