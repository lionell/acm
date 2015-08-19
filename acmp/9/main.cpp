#include <bits/stdc++.h>

using namespace std;

#define cin in
#ifndef ACMP
ifstream in("/home/lionell/Developing/acm/acmp/9/in.txt");
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
    int mini = 0, maxi = 0, sum = 0;
	for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] < a[mini]) mini = i;
        if (a[i] > a[maxi]) maxi = i;
        if (a[i] > 0) sum += a[i];
    }
    if (mini > maxi) swap(mini, maxi);
    int prod = 1;
    for (int i = mini + 1; i <= maxi - 1; ++i) {
        prod *= a[i];
    }
    cout << sum << " " << prod;
	return 0;
}