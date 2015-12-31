#include <bits/stdc++.h>

using namespace std;

#define cin in
#ifndef ACMP
ifstream in("/home/lionell/Developing/acm/acmp/72/in.txt");
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
    string s = "";
    cin >> s;
    if (!next_permutation(all(s))) {
        sort(all(s));
    }
    cout << s;
	return 0;
}