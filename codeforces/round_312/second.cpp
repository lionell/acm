//
// Created by lionell on 7/14/15.
//

#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#define cin in
ifstream in("/home/lionell/Developing/acm/codeforces/round_312/in.txt");
#endif

#define endl "\n"
#define all(c) begin(c), end(c)
#define eb emplace_back
#define size(c) (int)((c).size())
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<bool> vb;
typedef pair<int, int> ii;

template<typename T>
void print(vector<T> &a) {
    for (auto x: a) {
        cout << x << " ";
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n = 0;
    cin >> n;
    vi c(1000001), f(1000001), l(1000001);
    for (int i = 0; i < n; ++i) {
        int t = 0;
        cin >> t;
        if (c[t] == 0) {
            f[t] = i;
        }
        l[t] = i;
        c[t]++;
    }
    int m = 1;
    for (int i = 1; i < 1000001; ++i) {
        if (c[i] > c[m] || c[i] == c[m] && l[i] - f[i] < l[m] - f[m]) {
            m = i;
        }
    }
    cout << f[m] + 1 << " " << l[m] + 1;
    return 0;
}