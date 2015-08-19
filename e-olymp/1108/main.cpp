#include <bits/stdc++.h>

using namespace std;

#ifndef EOLIMP
#define cin in
ifstream in("/home/lionell/Developing/acm/e-olymp/1108/in.txt");
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

struct Edge {
    int a;
    int b;
    int c;
};

void solution() {
    int n = 0, m = 0;
    cin >> n >> m;
    vector<Edge> edges(m + 0UL);
    for (int i = 0; i < m; ++i) {
        int a = 0, b = 0, c = 0;
        cin >> edges[i].a >> edges[i].b >> edges[i].c;
    }
    vi d(n + 0UL, 0);
    for (int i = 0; i < n - 1; ++i) {
        for (auto e: edges) {
            smin(d[e.b], d[e.a] + e.c);
        }
    }
    bool fail = false;
    for (auto e: edges) {
        if (d[e.b] > d[e.a] + e.c) {
            fail = true;
            break;
        }
    }
    cout << (fail ? "possible" : "not possible");
}

int main() {
#ifndef EOLIMP
    clock_t __start = clock();
#endif
    ios_base::sync_with_stdio(false); cin.tie(0);
    solution();
    cout << endl;
#ifndef EOLIMP
    cerr << "Execution time: " << fixed << (clock() - __start) / (double)CLOCKS_PER_SEC << "ms.";
#endif
    return 0;
}