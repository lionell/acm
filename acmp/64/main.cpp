#include <bits/stdc++.h>

using namespace std;

#define cin in
#ifndef ACMP
ifstream in("/home/lionell/Developing/acm/acmp/64/in.txt");
#else
#define cout out
ifstream in("input.txt");
ofstream out("output.txt");
template<typename T>
string to_string(T x) {
    stringstream ss;
    ss << x;
    return ss.str();
}
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
const int MAXN = 10001;
const int MAXM = 1000;

bool prime(int x) {
    bool fail = false;
    for (int i = 2; i * i <= x; ++i) {
        fail |= x % i == 0;
        if (fail) break;
    }
    return !fail;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
    string s = "2";
    int j = 3;
    while (sz(s) < MAXN) {
        if (prime(j)) {
            s += to_string(j);
        }
        j += 2;
    }
	int m = 0;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        int t = 0;
        cin >> t;
        cout << s[t - 1];
    }
	return 0;
}