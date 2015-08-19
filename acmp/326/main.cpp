#include <bits/stdc++.h>

using namespace std;

#define cin in
#ifndef ACMP
ifstream in("/home/lionell/Developing/acm/acmp/326/in.txt");
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
const int MAXM = 201;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
    int n = 0;
    cin >> n;
    vi a(n + 0UL);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        a[i] += 100;
    }
    vi c(MAXM);
    for (int i = 0; i < n; ++i) {
        c[a[i]]++;
    }
    int maxi = 0;
    for (int i = 0; i < MAXM; ++i) {
        if (c[i] > c[maxi] || c[i] == c[maxi] && i < maxi) maxi = i;
    }
    for (int i = 0; i < n; ++i) {
        if (a[i] != maxi) cout << a[i] - 100 << " ";
    }
    for (int i = 0; i < c[maxi]; ++i) {
        cout << maxi - 100 << " ";
    }
	return 0;
}