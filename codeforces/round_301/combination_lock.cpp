/*
 * Author: Ruslan Sakevych
 * Verdict: Accepted
*/

#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#define cin in
ifstream in("/home/lionell/Developing/acm/codeforces/round_301/in.txt");
#endif

int main() {
    int n = 0;
    cin >> n;
    char *a = new char[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int answer = 0;
    for (int i = 0; i < n; ++i) {
        char x = 0;
        cin >> x;
        int distance = abs((int)(a[i] - x));
        if (distance > 5) distance = 10 - distance;
        answer += distance;
    }
    cout << answer;
    delete[] a;
    return 0;
}