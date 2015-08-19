//
// Created by lionell on 3/26/15.
//

#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#define cin in
ifstream in("/home/lionell/Developing/acm/codeforces/round_297/in.txt");
#endif

int main() {
    ios_base::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    int *l = new int[n]();
    for (int i = 0; i < n; ++i) {
        cin >> l[i];
    }
    sort(l, l + n, greater<int>());
    long long answer = 0;
    long long found = 0;
    for (int i = 1; i < n; ++i) {
        if (l[i - 1] == l[i] || l[i - 1] == l[i] + 1) {
            if (found != 0) {
                answer += found * l[i];
                found = 0;
            }
            else {
                found = l[i];
            }
            i += 1;
        }
    }
    cout << answer;
    delete[] l;
    return 0;
}