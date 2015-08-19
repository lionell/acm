#include <bits/stdc++.h>

using namespace std;

#define cin in
#ifndef ACMP
ifstream in("/home/lionell/Developing/acm/acmp/119/in.txt");
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

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n = 0;
	cin >> n;
    vi a(n + 0UL);
    for (int i = 0; i < n; ++i) {
        int h = 0, m = 0, s = 0;
        cin >> h >> m >> s;
        a[i] = h * 3600 + m * 60 + s;
    }
    sort(all(a));
    for (auto t: a) {
        int h = t / 3600, m = (t % 3600) / 60, s = t % 60;
        cout << h << " " << m << " " << s << endl;
    }
	return 0;
}