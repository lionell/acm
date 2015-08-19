/*
 * Author: Ruslan Sakevych
 * Verdict: Accepted
 */

#include <cstdio>

//#define DEBUG

const int MAX_NUMBER = 1001;

int used[MAX_NUMBER];
int fractional[MAX_NUMBER];

int main() {
#ifdef DEBUG
    freopen("/home/lionell/Developing/acm/acmp/109/in.txt", "r", stdin);
#else
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    for (int i = 0; i < MAX_NUMBER; ++i) used[i] = -1;
    int a = 0, b = 0;
    scanf("%d", &a);
    getchar();
    scanf("%d", &b);
    int quotient = a / b;
    printf("%d", quotient);
    if (a % b != 0) {
        int remainder = a % b;
        int index = 0;
        while (used[remainder] == -1) {
            used[remainder] = index;
            fractional[index++] = (remainder * 10) / b;
            remainder = (remainder * 10) % b;
        }
        printf("%c", '.');
        for (int i = 0; i < used[remainder]; ++i) printf("%d", fractional[i]);
        printf("%c", '(');
        for (int i = used[remainder]; i < index; ++i) printf("%d", fractional[i]);
        printf("%c", ')');
    }

#ifdef DEBUG
    fclose(stdin);
#else
    fclose(stdin);
    fclose(stdout);
#endif
    return 0;
}