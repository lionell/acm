//
// Created by lionell on 3/29/15.
//

#include <bits/stdc++.h>

int main() {
#ifndef ONLINE_JUDGE
    freopen("/home/lionell/Developing/acm/codeforces/zeptolab_code_rush_2014/in.txt", "r", stdin);
#endif
    int n = 0, m = 0, k = 0;
    scanf("%d%d%d", &n, &m, &k);
    int *answers = new int[m]();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            char c = 0;
            scanf(" %c", &c);
            switch (c) {
                case 'R':
                    if (j + i < m) answers[j + i]++;
                    break;
                case 'L':
                    if (j - i >= 0) answers[j - i]++;
                    break;
                case 'U':
                    if (i % 2 == 0) answers[j]++;
                    break;
                case 'D':
                    break;
            }
        }
    }
    for (int i = 0; i < m; ++i) printf("%d ", answers[i]);
    delete[] answers;
#ifndef ONLINE_JUDGE
    fclose(stdin);
#endif
    return 0;
}