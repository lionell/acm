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
#define pb pop_back
#define fs first
#define sd second;
#define sz(c) (int)((c).size())
#define smin(a, b) a = min(a, b)
#define smax(a, b) a = max(a, b)
#define set(a, b) fill(all(a), b)

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef queue<int> qi;
typedef vector<ii> vii;
typedef queue<ii> qii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;

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
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n = 0;
    cin >> n;
    vi d(MAXN);
    vi cnt(MAXN);
    vb used(MAXN);
    for (int i = 0; i < n; ++i) {
        int a = 0;
        cin >> a;
        set(used, false);
        qii q;
        q.push({a, 0});
        while (!q.empty()) {
            int x = q.front().fs, y = q.front().sd;
            q.pop();
            if (x >= MAXN) continue;
            if (used[x]) continue;
            used[x] = true;
            cnt[x]++;
            d[x] += y;
            q.push({x * 2, y + 1});
            q.push({x / 2, y + 1});
        }
    }
    int mind = INF;
    for (int i = 1; i < MAXN; ++i) {
        if (cnt[i] == n) smin(mind, d[i]);
    }
    cout << mind;
    return 0;
}