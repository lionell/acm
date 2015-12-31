#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

int main() {
    ull a, b;
    cin >> a >> b;
    ull ans = 0;
    for (int i = 0; i < 63; ++i) {
        ull k = (1ULL << (i + 1)) - 1ULL;
        for (int j = 0; j < i; ++j) {
            ull p = k - (1ULL << j);
            if (a <= p && p <= b) {
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}