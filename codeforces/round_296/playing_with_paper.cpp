/*
* Verdict: Tests passed
*/
#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#define cin in
#endif

int main() {
    ios_base::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    ifstream in("/home/lionell/Developing/acm/codeforces/round_296/in.txt");
    #endif
    unsigned long long a = 0;
    unsigned long long b = 0;
    cin >> a >> b;
    unsigned long long answer = 0;
    while (b > 0) {
        answer += a / b;
        a = a % b;
        swap(a, b);
    }
    cout << answer;
    return 0;
}