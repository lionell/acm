//
// Created by lionell on 3/28/15.
//

#include <cstdio>
#include <string.h>

#define DEBUG

const int MAX_LENGTH = 50001;
int has[1000];

long long evaluate(char* s) {
    int s_length = int(strlen(s));
    long long *counts = new long long[s_length]();
    for (int i = 0; i < s_length; ++i) {
        counts[i] = ((i > 0) ? counts[i - 1] : 1) * has[s[i] - '0'];
        if (i > 0 && s[i - 1] != '0') {
            counts[i] += counts[i - 2] * has[(s[i - 1] - '0') * 10 + s[i] - '0'];
        }
        if (i > 1 && s[i - 2] != '0') {
            counts[i] += counts[i - 3] * has[(s[i - 2] - '0') * 100 + (s[i - 1] - '0') * 10 + s[i] - '0'];
        }
    }
    long long result = counts[s_length - 1];
    delete[] counts;
    return result;
}

int main() {
    #ifdef DEBUG
    freopen("/home/lionell/Developing/acm/RCC/in.txt", "r", stdin);
    #endif
    int a = 0, b = 0, c = 0;
    scanf("%d%d%d", &a, &b, &c);
    for (int i = 0; i < 9; ++i) {
        has[a * i * i + b * i + c]++;
    }
    char *s = new char[MAX_LENGTH];
    scanf("%s", s);
    printf("%llu\n", evaluate(s));
    int m = 0;
    scanf("%d", &m);
    for (int i = 0; i < m; ++i) {
        int p = 0, d = 0;
        scanf("%d%d", &p, &d);
        s[p - 1] = char(d + '0');
        printf("%llu\n", evaluate(s));
    }
    #ifdef DEBUG
    fclose(stdin);
    #endif
    return 0;
}