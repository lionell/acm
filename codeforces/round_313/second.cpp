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

bool check(int w, int h, int a, int b, int c, int d) {
    return (w >= a + c && h >= max(b, d));
}

void solution() {
    int a1 = 0, b1 = 0, a2 = 0, b2 = 0, a3 = 0, b3 = 0;
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
    bool ok = false;
    ok |= check(a1, b1, a2, b2, a3, b3);
    ok |= check(a1, b1, a2, b2, b3, a3);
    ok |= check(a1, b1, b2, a2, a3, b3);
    ok |= check(a1, b1, b2, a2, b3, a3);
    ok |= check(b1, a1, a2, b2, a3, b3);
    ok |= check(b1, a1, a2, b2, b3, a3);
    ok |= check(b1, a1, b2, a2, a3, b3);
    ok |= check(b1, a1, b2, a2, b3, a3);
    cout << (ok ? "YES" : "NO");
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