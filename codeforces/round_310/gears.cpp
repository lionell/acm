//
// Created by lionell on 6/27/15.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("/home/lionell/Developing/acm/codeforces/round_310/in.txt", "r", stdin);
#endif
    int n = 0;
    scanf("%d", &n);
    bool fail = false;
    int needed = -1;
    for (int i = 0; i < n; ++i) {
        int a = 0;
        scanf("%d", &a);
        int turns = 0;
        if (i % 2 == 1) {
            if (i > a) turns = a + n - i;
            else turns = a - i;
        } else {
            if (i < a) turns = n - a + i;
            else turns = i - a;
        }
        if (needed == -1) needed = turns;
        else fail |= (needed != turns);
    }
    printf(fail ? "No" : "Yes");
    return 0;
}