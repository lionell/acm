#include <cstdio>
#include <cstring>

//#define DEBUG

const int MAX_LENGTH = 251;
char s[MAX_LENGTH];
char answer[MAX_LENGTH];


int main() {
#ifdef DEBUG
    freopen("/home/lionell/Developing/acm/acmp/641/input.txt", "r", stdin);
#else
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    scanf("%s", s);
    int s_length = int(strlen(s));
    int j = 0;
    int i = 0;
    while (i < s_length) {
        while (j > 0 && answer[j - 1] < s[i] && i - j < 2) j--;
        answer[j++] = s[i++];
    }
    while (i - j < 2) j--;
    answer[j] = '\0';
    printf("%s", answer);

#ifdef DEBUG
    fclose(stdin);
#else
    fclose(stdin);
    fclose(stdout);
#endif
    return 0;
}