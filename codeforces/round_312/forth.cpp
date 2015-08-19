//
// Created by lionell on 7/18/15.
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
#define pb pop_back
#define fs first
#define sd second
#define sz(c) (int)((c).size())
#define smin(a, b) a = min(a, b)
#define smax(a, b) a = max(a, b)
#define set(a, b) fill(all(a), b)

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<ull> vul;
typedef vector<ll> vl;
typedef vector<ld> vld;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
typedef queue<int> qi;
typedef queue<pii> qii;

const double EPS = 1e-7;
const int mod = 10000007;
const int INF = (int)1e9;
const int MAXN = 100001;

template<typename T>
void print(vector<T> &a) {
    for (auto x: a) {
        cout << x << " ";
    }
}

int main() {
#ifndef ONLINE_JUDGE
    clock_t __start = clock();
#endif
    ios_base::sync_with_stdio(false); cin.tie(0);
    int h = 0, q = 0;
    cin >> h >> q;
    vll del;
    ll L = 1LL << (h - 1), R = (1LL << h) - 1;
    for (int i = 0; i < q; ++i) {
        int j = 0, ans = 0;
        ll l = 0LL, r = 0LL;
        cin >> j >> l >> r >> ans;
        for (int k = j; k < h; ++k) {
            l = l << 1;
            r = (r << 1) + 1;
        }
        if (ans == 1) {
            smax(L, l);
            smin(R, r);
        } else del.eb(l, r);
    }
    sort(all(del));
    for (auto p: del) {
        ll l = p.fs, r = p.sd;
        if (l <= L && L <= r) L = r + 1;
    }
    sort(all(del),
         [](pll a, pll b) {
             return (a.sd > b.sd || a.sd == b.sd && a.fs > b.fs);
         }
    );
    for (auto p: del) {
        ll l = p.fs, r = p.sd;
        if (l <= R && R <= r) R = l - 1;
    }
    if (L < R) cout << "Data not sufficient!";
    else if (L == R) cout << L;
    else cout << "Game cheated!";
#ifndef ONLINE_JUDGE
    cout << endl;
    cerr << "Execution time: " << fixed << (clock() - __start) / (double)CLOCKS_PER_SEC << "ms.";
#endif
    return 0;
}