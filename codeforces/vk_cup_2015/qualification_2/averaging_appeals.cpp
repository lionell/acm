/*
* Verdict: Tests passed
*/
#include <bits/stdc++.h>

int main() {
    #ifndef ONLINE_JUNDGE
    freopen("/home/lionell/Developing/acm/codeforces/VK_Cup_2015/qualification_2/in.txt", "r", stdin);
    #endif
    int n = 0, t = 0;
    double c = 0.0;
    scanf("%d%d%lf", &n, &t, &c);
    int *a = new int[n + 1]();
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    int m = 0;
    scanf("%d", &m);
    int *q = new int[m]();
    for (int i = 0; i < m; ++i) {
        scanf("%d", &q[i]);
    }
    long long sum = 0L;
    int current_query = 0;
    double approx = 0.0;
    for (int i = 1; i <= n; ++i) {
        sum += a[i];
        if (i - t > 0) {
            sum -= a[i - t];
        }
        approx = (approx + double(a[i]) / double(t)) / c;
        if (q[current_query] == i) {
            double real = double(sum) / double(t);
            double error = fabs(approx - real) / real;
            printf("%.6lf %.6lf %.6lf\n", real, approx, error);
            current_query++;
        }
    }
    delete[] q;
    delete[] a;
    #ifndef ONLINE_JUDGE
    fclose(stdin);
    #endif
    return 0;
}