/*
 * Author: Ruslan Sakevych
 * Verdict: Accepted
 */

#include <bits/stdc++.h>

using namespace std;

const double EPS = 1e-10;

long long evaluate(long long r, long long b, long long hr, long long hb) {
    return (r * hr + b * hb);
}

bool check(long long r, long long b, long long wr, long long wb, long long c) {
    return (r >= 0 && b >= 0 && r * wr + b * wb <= c);
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("/home/lionell/Developing/acm/codeforces/zeptolab_code_rush_2015/in.txt", "r", stdin);
#endif

    long long c = 0, hr = 0, hb = 0, wr = 0, wb = 0;
    cin >> c >> hr >> hb >> wr >> wb;
    if (wr < wb) {
        swap(hr, hb);
        swap(wr, wb);
    }
    long long answer = 0;
    // wr >= wb
    long long root = (long long)sqrt(c) + 1;
    if (wr >= root) {
        for (long long i = 0; i < root; ++i) {
            long long j = (c - wr * i) / wb;
            if (check(i, j, wr, wb, c)) answer = max(answer, evaluate(i, j, hr, hb));
        }
    } else {
        double c1 = (double)hr / wr;
        double c2 = (double)hb / wb;
        if (c1 < c2) {
            swap(hr, hb);
            swap(wr, wb);
        }
        // r > b
        for (long long j = 0; j < wr; ++j) {
            long long i = (c - wb * j) / wr;
            if (check(i, j, wr, wb, c)) answer = max(answer, evaluate(i, j, hr, hb));
        }
    }
    cout << answer;

#ifndef ONLINE_JUDGE
    fclose(stdin);
#endif
    return 0;
}