//
// Created by lionell on 4/14/15.
//

#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#define cin in
ifstream in("/home/lionell/Developing/acm/codeforces/round_299/in.txt");
#endif

bool check(long long A, long long B, long long t, long long m, long long l, long long r) {
    long long sum = (2 * A + B * (l + r - 2)) * (r - l + 1) / 2 * 1LL;
    return (A + B * (r - 1) <= t && sum <= t * m * 1LL);
}

long long binary_search(long long A, long long B, long long t, long long m, long long l, long long left, long long right) {
    if (right - left > 1) {
        if (check(A, B, t, m, l, (left + right) / 2))
            return binary_search(A, B, t, m, l, (left + right) / 2, right);
        else return binary_search(A, B, t, m, l, left, (left + right) / 2);
    } else return left;
}

int main() {
    ios_base::sync_with_stdio(false);
    long long A = 0, B = 0, n = 0;
    cin >> A >> B >> n;
    for (long long i = 0; i < n; ++i) {
        long long l = 0, t = 0, m = 0;
        cin >> l >> t >> m;
        if (check(A, B, t, m, l, l))
            cout << binary_search(A, B, t, m, l, l, (t - A + B) / B + 1);
        else cout << -1;
        cout << endl;
    }
    return 0;
}
