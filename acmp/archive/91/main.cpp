#include <bits/stdc++.h>

using namespace std;

#define cin in
#ifndef ACMP
ifstream in("/home/lionell/Developing/acm/acmp/91/in.txt");
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


int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
    int n = 0;
    cin >> n;
    vi a = {2, 3, 4, 7}, b = {1, 5, 6};
    int i = 8;
    while (sz(a) < n || sz(b) < n) {
        if (sz(a) - 3 >= 0 && sz(a) - 1 < sz(b) && i == b[sz(a) - 1] + b[sz(a) - 3]) a.eb(i);
        else b.eb(i);
        ++i;
    }
    cout << a[n - 1] << endl << b[n - 1];
	return 0;
}