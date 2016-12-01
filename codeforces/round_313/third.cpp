//
// Created by lionell on 7/22/15.
//

#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#define cin in
ifstream in("/home/lionell/Developing/acm/codeforces/round_313/in.txt");
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
typedef pair<double, double> pdd;
typedef pair<ld, ld> pldld;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<ull> vul;
typedef vector<ll> vl;
typedef vector<ld> vld;
typedef vector<pii> vii;
typedef vector<pdd> vdd;
typedef vector<pldld> vldld;
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

vldld turn = {{1.0, 0.0}, {1.0 / 2.0, sqrt(3.0) / 2.0}, {-1.0 / 2.0, sqrt(3.0) / 2.0}, {-1, 0}, {-1.0 / 2.0, -sqrt(3.0) / 2.0}, {1.0 / 2.0, -sqrt(3.0) / 2.0}};

void solution() {
    vldld p(6);
    pldld c = {10000.0, 10000.0};
    for (int i = 0; i < 6; ++i) {
        int t = 0;
        cin >> t;
        c.fs += t * turn[i].fs;
        c.sd += t * turn[i].sd;
        p[i] = c;
    }
    ld square = (p[0].sd + p[5].sd) * (p[0].fs - p[5].fs);
    for (int i = 1; i < 6; ++i) {
        square += (p[i].sd + p[i - 1].sd) * (p[i].fs - p[i - 1].fs);
    }
    ld one = sqrt(3.0) / 2.0;
    cout << (int)round(fabs(square) / one);
}

int main() {
#ifndef ONLINE_JUDGE
    clock_t __start = clock();
#endif
    ios_base::sync_with_stdio(false); cin.tie(0);
    solution();
#ifndef ONLINE_JUDGE
    cout << endl;
    cerr << "Execution time: " << fixed << (clock() - __start) / (double)CLOCKS_PER_SEC << "ms.";
#endif
    return 0;
}