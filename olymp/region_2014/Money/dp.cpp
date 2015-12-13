/*
* Author: Ruslan Sakevych
* Complexity: O(n)
*/
//#define DEBUG

#include <iostream>
#include <fstream>

#ifdef DEBUG
#define cout out
#define cin in
#endif

using namespace std;

#ifdef DEBUG
ifstream in("/home/lionell/Documents/Work/ACM/Olymp/VinRegion2014/Money/in.txt");
ofstream out("/home/lionell/Documents/Work/ACM/Olymp/VinRegion2014/Money/out.txt");
#endif

int main() {
    int n = 0, a = 0, b = 0, c = 0;
    cin >> n >> a >> b >> c;
    int *dp = new int[n + 1]();
    if (a <= n) dp[a] = 1;
    if (b <= n) dp[b] = 1;
    if (c <= n) dp[c] = 1;
    for (int i = min(min(a, b), c); i <= n; ++i) {
        if (i - a > 0 && dp[i - a] > 0) dp[i] = max(dp[i], dp[i - a] + 1);
        if (i - b > 0 && dp[i - b] > 0) dp[i] = max(dp[i], dp[i - b] + 1);
        if (i - c > 0 && dp[i - c] > 0) dp[i] = max(dp[i], dp[i - c] + 1);
    }
    cout << dp[n];
    delete[] dp;
    return 0;
}