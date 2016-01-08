#include <bits/stdc++.h>

using namespace std;

const int MAX = 501;

char g[MAX][MAX];
int hor[MAX][MAX];
int ver[MAX][MAX];

int main() {
    int h, w;
    cin >> h >> w;
    for (int i = 1; i <= h; ++i) {
        for (int j = 1; j <= w; ++j) {
            cin >> g[i][j];
        }
    }
    for (int i = 1; i <= h; ++i) {
        for (int j = 1; j <= w; ++j) {
            hor[i][j] += hor[i - 1][j];
            hor[i][j] += hor[i][j - 1];
            hor[i][j] -= hor[i - 1][j - 1];
            if (g[i][j] == '.' && g[i][j - 1] == '.')
                hor[i][j]++;
            ver[i][j] += ver[i - 1][j];
            ver[i][j] += ver[i][j - 1];
            ver[i][j] -= ver[i - 1][j - 1];
            if (g[i][j] == '.' && g[i - 1][j] == '.')
                ver[i][j]++;
        }
    }
    int q;
    cin >> q;
    while (q--) {
        int r1, c1, r2, c2;
        cin >> r1 >> c1 >> r2 >> c2;
        cout << hor[r2][c2] - hor[r2][c1] - hor[r1 - 1][c2] + hor[r1 - 1][c1] +
                        ver[r2][c2] - ver[r2][c1 - 1] - ver[r1][c2] + ver[r1][c1 - 1] << endl;
    }
    return 0;
}