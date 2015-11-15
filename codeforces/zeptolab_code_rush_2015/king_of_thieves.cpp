#include <cstdio>

int main() {
#ifndef ONLINE_JUDGE
    freopen("/home/lionell/Developing/acm/codeforces/zeptolab_code_rush_2015/in.txt", "r", stdin);
#endif
    int n = 0;
    scanf("%d", &n);
    char *s = new char[n + 1];
    scanf(" %s", s);
    bool answer = false;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int delta = j - i;
            bool fail = false;
            for (int k = 0; k < 5; ++k) {
                fail |= (i + delta * k >= n || s[i + delta * k] == '.');
                if (fail) break;
            }
            answer = !fail;
            if (answer) break;
        }
        if (answer) break;
    }
    if (answer) printf("yes");
    else printf("no");
    delete[] s;
#ifndef ONLINE_JUDGE
    fclose(stdin);
#endif
    return 0;
}