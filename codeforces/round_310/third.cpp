//
// Created by lionell on 6/27/15.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("/home/lionell/Developing/acm/codeforces/round_310/in.txt", "r", stdin);
#endif
    int n = 0, k = 0;
    scanf("%d %d", &n, &k);
    int count = 0;
    for (int i = 0; i < k; ++i) {
        int m = 0;
        scanf("%d", &m);
        int next = 0;
        scanf("%d", &next);
        m--;
        if (next == 1) {
            count++;
            int previous = 0;
            while (m > 0 && next - previous == 1) {
                previous = next;
                scanf("%d", &next);
                m--;
            }
            if (next - previous == 1) m = -1;
        }
        count += m + 1;
        while (m > 0) {
            scanf("%d", &next);
            m--;
        }
    }
    printf("%d", 2 * count - k - 1);
    return 0;
}