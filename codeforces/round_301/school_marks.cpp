//
// Created by lionell on 4/30/15.
// Verdict: Accepted
//

#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#define cin in
ifstream in("/home/lionell/Developing/acm/codeforces/round_301/in.txt");
#endif

int main() {
    int n = 0, k = 0, p = 0, x = 0, y = 0;
    cin >> n >> k >> p >> x >> y;
    int more = 0, less = 0;
    for (int i = 0; i < k; ++i) {
        int t = 0;
        cin >> t;
        x -= t;
        more += (t >= y);
        less += (t < y);
    }
    if (less <= (n - 1) / 2) {
        int to_balance = max((n + 1) / 2 - more, 0);
        int last = n - k - to_balance;
        x -= to_balance * y + last;
        if (x >= 0) {
            for (int i = 0; i < to_balance; ++i) cout << y << " ";
            for (int i = 0; i < last; ++i) cout << 1 << " ";
        } else cout << -1;
    } else cout << -1;
    return 0;
}