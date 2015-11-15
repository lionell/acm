#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#define cin in
ifstream in("/home/lionell/Developing/acm/codeforces/looksery_cup_2015/in.txt");
#endif

char a[51][51];

bool check(int i, int j) {
    char b[4] = { a[i - 1][j - 1], a[i - 1][j], a[i][j - 1], a[i][j]};
    sort(b, b + 4);
    return (b[0] == 'a' && b[1] == 'c' && b[2] == 'e' && b[3] == 'f');
}

int main() {
    int n = 0, m = 0;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }
    int count = 0;
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < m; ++j) {
            count += check(i, j);
        }
    }
    cout << count;
    return 0;
}