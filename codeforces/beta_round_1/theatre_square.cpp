#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#define cin in
ifstream in("/home/lionell/Developing/acm/codeforces/beta_round_1/in.txt");
#endif

int main() {
    int n = 0, m = 0, a = 0;
    cin >> n >> m >> a;
    int rows_count = n / a + (n % a != 0);
    int cols_count = m / a + (m % a != 0);
    long long area = (long long)rows_count * (long long)cols_count;
    cout << area;
    return 0;
}
