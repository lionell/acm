//
// Created by lionell on 5/9/15.
//

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define x first
#define y second

template<typename T> inline T sqr(T a) { return a * a; }

typedef long long ll;
typedef long double ld;

vector<int> odd, even;

int main() {
#ifndef ONLINE_JUDGE
    freopen("/home/lionell/Developing/acm/codeforces/round_251/in.txt", "r", stdin);
#endif
    int n = 0, k = 0, p = 0;
    scanf("%d%d%d", &n, &k, &p);
    for (int i = 0; i < n; ++i) {
        int t = 0;
        scanf("%d", &t);
        if (t % 2== 1) odd.pb(t);
        else even.pb(t);
    }
    int odd_size = (int)odd.size();
    int even_size = (int)even.size();
    if (odd_size >= k - p && odd_size % 2 == (k - p) % 2) {
        int odd_last = odd_size - (k - p);
        if (even_size + odd_last / 2 >= p) {
            printf("YES\n");
            int odd_index = 0, even_index = 0;
            for (int i = 0; i < k - p - 1; ++i)
                printf("1 %d\n", odd[odd_index++]);
            if (even_size < p - 1) {
                for (int i = 0; i < even_size; ++i)
                    printf("1 %d\n", even[even_index++]);
                for (int i = even_index; i < p - 1; ++i) {
                    printf("2 %d ", odd[odd_index++]);
                    printf("%d\n", odd[odd_index++]);
                }
            } else {
                for (int i = 0; i < p - 1; ++i)
                    printf("1 %d\n", even[even_index++]);
            }
            if (k - p > 0 && p > 0)
                printf("1 %d\n", odd[odd_index++]);
            int count = odd_size - odd_index + even_size - even_index;
            if (count > 0) {
                printf("%d ", count);
                for (int i = odd_index; i < odd_size; ++i)
                    printf("%d ", odd[odd_index++]);
                for (int i = even_index; i < even_size; ++i)
                    printf("%d ", even[even_index++]);
            }
        } else printf("NO");
    } else printf("NO");
    return 0;
}