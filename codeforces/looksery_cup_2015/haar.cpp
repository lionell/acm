//
// Created by lionell on 6/6/15.
//

#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#define cin in
ifstream in("/home/lionell/Developing/acm/codeforces/looksery_cup_2015/in.txt");
#endif

bool a[101][101];
bool b[101][101];

int main() {
    int n = 0, m = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            char ch = 0;
            cin >> ch;
            a[i][j] = ch == 'B';
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (a[i][j] && (i + 1 > n || !a[i + 1][j]) && (j + 1 > m || !a[i][j + 1])) {
                b[i][j] = true;
                b[i - 1][j] = true;
                b[i][j - 1] = true;
                b[i - 1][j - 1] = true;
            }
        }
    }
    int count = 1;
    for (int i = 1; i < 101; ++i) {
        for (int j = 1; j < 101; ++j) {
            count += b[i][j] ? 1 : 0;
        }
    }
    cout << count;
}