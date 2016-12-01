//
// Created by lionell on 6/24/15.
//

#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#define cin in
ifstream in("/home/lionell/Developing/acm/codeforces/round_309/in.txt");
#endif

string a[101];

int main() {
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    int max = 1, current = 1;
    for (int i = 1; i < n; ++i) {
        if (a[i - 1] == a[i]) current++;
        else current = 1;
        if (max < current) max = current;
    }
    cout << max;
    return 0;
}