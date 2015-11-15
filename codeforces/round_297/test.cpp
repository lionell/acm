#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <set>
#include <map>
#include <cassert>
#include <ctime>
#include <string>

using namespace std;

#ifdef _WIN32
#define LLD "%I64d"
#else
#define LLD "%lld"
#endif

#define DEBUG

typedef long double ld;

long long rdtsc() {
    long long tmp;
    asm("rdtsc" : "=A"(tmp));
    return tmp;
}

inline int myrand() {
    return abs((rand() << 15) ^ rand());
}

inline int rnd(int x) {
    return myrand() % x;
}

#define pb push_back
#define mp make_pair
#define eprintf(...) fprintf(stderr, __VA_ARGS__)
#define sz(x) ((int)(x).size())
#define TASKNAME "text"

const int INF = (int)1e9 + 1;
const ld EPS = 1e-9;

const int maxn = (int)2e3 + 10;
char table[maxn][maxn + 1];

int st[maxn * maxn][2];

int n, m;
inline bool ok(int x, int y) {
    return 0 <= x && 0 <= y && x < n && y < m;
}

bool solve() {
    if (scanf("%d%d", &n, &m) < 2) {
        return 0;
    }
    int r = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%s", table[i]);
        for (int j = 0; j < m; ++j) {
            if (table[i][j] == '.') {
                st[r][0] = i, st[r][1] = j, ++r;
            }
        }
    }
    for (int l = 0; l < r; ++l) {
        int x = st[l][0], y = st[l][1];
        assert(table[x][y] == '.');
        for (int dx = -1; dx <= 0; ++dx) {
            for (int dy = -1; dy <= 0; ++dy) {
                if (!ok(x + dx, y + dy) || !ok(x + 1 + dx, y + 1 + dy)) {
                    continue;
                }
                int cnt = 0;
                int sx = -1, sy = -1;
                for (int dx1 = dx; dx1 <= dx + 1; ++dx1) {
                    for (int dy1 = dy; dy1 <= dy + 1; ++dy1) {
                        int cx = x + dx1, cy = y + dy1;
                        if (table[cx][cy] == '.') {
                            ++cnt;
                        } else {
                            sx = cx, sy = cy;
                        }
                    }
                }
                if (cnt == 3) {
                    assert(sx != -1 && sy != -1);
                    table[sx][sy] = '.';
                    st[r][0] = sx, st[r][1] = sy, ++r;
                }
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        printf("%s\n", table[i]);
    }
    return 1;
}

int main() {
    srand(rdtsc());
#ifdef DEBUG
  freopen("/home/lionell/Developing/acm/codeforces/round_297/in.txt", "r", stdin);
  freopen("/home/lionell/Developing/acm/codeforces/round_297/out.txt", "w", stdout);
#endif

    while (1) {
        if (!solve()) {
            break;
        }
#ifdef DEBUG
    eprintf("%.18lf\n", (double)clock() / CLOCKS_PER_SEC);
#endif
    }
    return 0;
}