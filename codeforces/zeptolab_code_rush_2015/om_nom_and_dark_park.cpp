#include <bits/stdc++.h>

int main() {
#ifndef ONLINE_JUDGE
    freopen("/home/lionell/Developing/acm/codeforces/zeptolab_code_rush_2015/in.txt", "r", stdin);
#endif
    int n = 0;
    scanf("%d", &n);
    int a_size = (1 << (n + 1)) - 2;
    int *a = new int[a_size]();
    int *b = new int[a_size + 2]();
    for (int i = 0; i < a_size; ++i) scanf("%d", &a[i]);
    int answer = 0;
    for (int i = a_size - 1; i >= 0; i -= 2) {
        int maximal = std::max(b[i + 2] + a[i], b[i + 1] + a[i - 1]);
        if (b[i + 2] + a[i] < maximal) answer += maximal - b[i + 2] - a[i];
        else answer += maximal - b[i + 1] - a[i - 1];
        b[i / 2 + 1] = maximal;
    }
    printf("%d", answer);
    delete[] a;
    delete[] b;
#ifndef ONLINE_JUDGE
    fclose(stdin);
#endif
    return 0;
}