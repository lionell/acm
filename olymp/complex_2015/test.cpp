#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <memory.h>
#include <cstring>
#include <sstream>
#include <cstdlib>
#include <complex>
#include <string>
#include <bitset>
#include <vector>
#include <cstdio>
#include <ctime>
#include <cmath>
#include <queue>
#include <stack>
#include <set>
#include <map>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef complex < double > cd;

const bool db = false;

#define mp make_pair
#define pb push_back
#define ppb pop_back
#define sd second
#define fs first

#define inf 1000000007
#define nmax 100010
#define mmax 100010
#define eps 1e-9

const int mod = 10007;
const int go = 2e6 + 10;

int n, x[333], y[333], maxa;
long long ans, sans;
short dp[5050][3][3][3][333][2];
string str;
int comp[333][333];
int mod333[go], mod3[go];

void add(short &a, short b) {
	if((a += b) >= mod)
		a -= mod;
}

void sub(short &a, short b) {
	if((a -= b) < 0) {
		a += mod;
	}
}

int step[] = {1, 10, 100};

short foo(int l, int r, char cnt, char dl, char dr, int rs, char get) {
	if(l > r) {
		return cnt == 0 && rs == 0 && get == 1;
	}
	short hi = str[l] - '0';
	short &ret = dp[comp[l][r]][cnt][dl][dr][rs][get];
	if(ret >= 0) {
		return ret;
	}
	ret = 0;
	if(l == r) {
		add(ret, foo(l + 1, r - 1, mod3[cnt + 2], mod3[dl + 1], mod3[dr + 2], mod333[rs + step[dl] * hi], 1));
		add(ret, foo(l + 1, r - 1, cnt, dl, dr, rs, get));
		return ret;
	}
	add(ret, foo(l + 1, r, cnt, dl, dr, rs, get));
	add(ret, foo(l, r - 1, cnt, dl, dr, rs, get));
	sub(ret, foo(l + 1, r - 1, cnt, dl, dr, rs, get));
	if(str[l] == str[r]) {
//		cout << l << " " << r << " " << (dl + 1) % 3 << " " << (dr + 2) % 3 << endl;
		add(ret, foo(l + 1, r - 1, mod3[cnt + 1], mod3[dl + 1], mod3[dr + 2], mod333[rs + hi * (step[dl] + step[dr])], 1));
	}
	return ret;
}

void Solve() {
	int pt = 0;
	for(int l = 0; l < str.size(); ++l) {
		for(int r = l; r < str.size(); ++r) {
			comp[l][r] = pt++;
		}
	}
	for(int sz = 0; sz < pt; ++sz) {
		for(int cnt = 0; cnt < 3; ++cnt) {
			for(int dl = 0; dl < 3; ++dl) {
				for(int dr = 0; dr < 3; ++dr) {
					for(int rs = 0; rs < 333; ++rs) {
						for(int k = 0; k < 2; ++k) {
							dp[sz][cnt][dl][dr][rs][k] = -1;
						}
					}
				}
			}
		}
	}
	ans = 0;
	ans = (ans + foo(0, str.size() - 1, 2, 0, 1, 0, 0)) % mod;
	ans = (ans + foo(0, str.size() - 1, 1, 0, 0, 0, 0)) % mod;
	ans = (ans + foo(0, str.size() - 1, 0, 0, 2, 0, 0)) % mod;
}

int main() {
//	freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
//	freopen("distance.in", "r", stdin); freopen("distance.out", "w", stdout);
	for(int i = 0; i < go; ++i) {
		mod333[i] = i % 333;
		mod3[i] = i % 3;
	}
	cin >> n;
    //cin >> str;
	for (int i = 0; i < n; ++i) {
        char x;
        cin >> x;
        str += x;
    }
	Solve();
	cout << ans << endl;
	//getchar(); getchar();
	return 0;
}