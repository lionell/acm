#include <bits/stdc++.h>

using namespace std;


void Sol1(int n , int x, int y, int z) {
    int a = 0, b = 0, c = 0;
    c = min(min(x, y), z);
    a = max(max(x, y), z);
    b = x + y + z - a - c;

    int answer = 0;
    for (int i = 0; i <= n / a; ++i) {
        for (int j = 0; j <= (n - a*i) / b; ++j) {
            if ((n - a*i - b*j) % c == 0) answer = max(answer, i + j + (n - a*i - b*j) / c);
        }
    }
}

void Sol2(int n, int a, int b, int c) {
    int *dp = new int[n + 1]();
    if (a <= n) dp[a] = 1;
    if (b <= n) dp[b] = 1;
    if (c <= n) dp[c] = 1;
    for (int i = min(min(a, b), c); i <= n; ++i) {
        if (i - a > 0 && dp[i - a] > 0) dp[i] = max(dp[i], dp[i - a] + 1);
        if (i - b > 0 && dp[i - b] > 0) dp[i] = max(dp[i], dp[i - b] + 1);
        if (i - c > 0 && dp[i - c] > 0) dp[i] = max(dp[i], dp[i - c] + 1);
    }
    delete[] dp;
}


int main() {
    ifstream in("/home/lionell/Documents/Work/ACM/Olymp/VinRegion2014/Money/Tester/new_tests.txt");
    int test_count = 0;
    in >> test_count;
    pair<double, int> times[1000];
    for (int i = 0; i < test_count; ++i) {
        clock_t time2 = 0;
        int n = 0, a = 0, b = 0, c = 0;
        in >> n >> a >> b >> c;
        clock_t start = clock();
        for (int j = 0; j < 10; ++j) Sol1(n, a, b, c);
        clock_t finish = clock();
        time2 = (finish - start);
        times[i] = { (double(time2) / CLOCKS_PER_SEC / 10), i };
        if (i % 10 == 0) cerr << i << endl;
    }
    sort(begin(times), end(times));
    for (int i = 990; i < 1000; ++i) {
        cerr.precision(10);
        cerr << times[i].second << " " << fixed << times[i].first << endl;
    }
    in.close();
    return 0;
}