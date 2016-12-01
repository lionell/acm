#include <bits/stdc++.h>

using namespace std;

#define cin in
#ifndef ACMP
ifstream in("/home/lionell/Developing/acm/acmp/73/in.txt");
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

const int mod = 27;
const int INF = (int)1e9;
const double EPS = 1e-7;
const int MAXN = 1001;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	string s = "";
	cin >> s;
	for (int i = 0; i < sz(s); ++i) {
        int e = -1;
        if (isdigit(s[i])) {
            e = s[i] - '0';
        } else {
            e = s[i] - 'A' + 10;
        }
        int d = (e - ((i + 1) % mod) + mod) % mod;
        if (d > 0) cout << (char)('a' + d - 1);
        else cout << " ";
    }
	return 0;
}