#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("/home/lionell/Developing/acm/codeforces/round_310/in.txt", "r", stdin);
#endif
    int n = 0;
    scanf("%d", &n);
    getchar();
    int zero = 0, one = 0;
    for (int i = 0; i < n; ++i) {
        char ch = 0;
        scanf("%c", &ch);
        if (ch == '0') zero++;
        if (ch == '1') one++;
    }
    printf("%d", abs(zero - one));
    return 0;
}