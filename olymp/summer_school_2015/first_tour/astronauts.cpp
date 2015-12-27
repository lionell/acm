//
// Created by lionell on 7/9/15.
//

#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#define cin in
ifstream in("/home/lionell/Developing/projects/contests/summer_school_2015/first_tour/in.txt");
#endif

int main() {
    ios_base::sync_with_stdio(false);
    int n = 0, k = 0;
    cin >> n >> k;
    vector<int> a(n + 0UL);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int i = n - 1;
    long long answer = 0LL;
    while (k > 1 && i >= 0) {
        answer += a[i];
        k--;
        i--;
    }
    if (i >= 0) {
        answer += a[0];
    }
    cout << answer;
    return 0;
}