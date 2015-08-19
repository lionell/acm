#include <bits/stdc++.h>

using namespace std;

#define cin in
#ifndef ACMP
ifstream in("/home/lionell/Developing/acm/acmp/266/in.txt");
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
const int MAXN = 24 * 60;

vi t(MAXN);

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int sh = 0, sm = 0, fh = 0, fm = 0;
        cin >> sh >> sm >> fh >> fm;
        int t1 = sh * 60 + sm, t2 = fh * 60 + fm;
        if (t1 < t2) {
            t[t1]++;
            t[t2]--;
        } else {
            t[t1]++;
            t[0]++;
            t[t2]--;
        }
    }
    int c = 0;
    int ans = 0;
    for (int i = 0; i < MAXN; ++i) {
        c += t[i];
        ans += c == n;
    }
    cout << ans;
	return 0;
}