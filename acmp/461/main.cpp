#include <bits/stdc++.h>

using namespace std;

#define cin in
#ifndef ACMP
ifstream in("/home/lionell/Developing/acm/acmp/461/in.txt");
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
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<bool> vb;
typedef pair<int, int> ii;

const int INF = (int)1e9;
const double EPS = 1e-7;
const int MAXN = 1001;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n = 0;
    cin >> n;
    vi a(n + 0UL);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(all(a));
    int ans = 0;
    for (int i = 0; i < n / 2 + 1; ++i) {
        ans += a[i] / 2 + 1;
    }
    cout << ans;
    return 0;
}