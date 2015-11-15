//
// Created by lionell on 4/14/15.
//

#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#define cin in
ifstream in("/home/lionell/Developing/acm/codeforces/round_299/in.txt");
#endif

int main() {
    ios_base::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    long long answer = (1 << (int(log10(n)) + 1)) - 1;
    int power = 1;
    while (n > 0) {
        answer += (n % 10 == 7) * power;
        n /= 10;
        power *= 2;
    }
    cout << answer;
    return 0;
}