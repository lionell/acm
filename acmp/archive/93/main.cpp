#include <bits/stdc++.h>

using namespace std;

#define cin in
#ifndef ACMP
ifstream in("/home/lionell/Developing/acm/acmp/93/in.txt");
#else
#define cout out
ifstream in("input.txt");
ofstream out("output.txt");
#endif

#define endl "\n"
#define all(c) begin(c), end(c)
#define eb emplace_back
#define pb pop_back
#define sz(c) (int)((c).size())

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<bool> vb;
typedef vector<string> vs;

const int INF = (int)1e9;
const double EPS = 1e-7;
const int MAXN = 1001;

int hamming(string s1, string s2) {
    int ans = 0;
    if (sz(s1) == sz(s2)) {
        for (int i = 0; i < sz(s1); ++i) {
            ans += s1[i] != s2[i];
        }
    } else ans = -1;
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n = 0;
    cin >> n;
    vs a(n + 0UL);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int m = 0;
    cin >> m;
    vs b(m + 0UL);
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }
    for (auto s1: a) {
        int ans = 0;
        for (auto s2: b) {
            ans += hamming(s1, s2) == 1;
        }
        cout << ans << " ";
    }
    return 0;
}