//
// Created by lionell on 7/9/15.
//

#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#define cin in
ifstream in("/home/lionell/Developing/projects/contests/summer_school_2015/first_tour/in.txt");
#endif

#define endl "\n"

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main() {
    int n = 0, k = 0;
    scanf("%d %d", &n, &k);
    vector<int> a(n + 0UL);
    int m = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
        m = max(m, a[i]);
    }
    vector<int> b(m + 1UL);
    for (int i = 0; i < n; ++i) {
        b[a[i]]++;
    }
    int answer = 0;
    for (int i = 0; i <= m; ++i) {
        answer += (b[i] >= k);
    }
    printf("%d", answer);
    return 0;
}