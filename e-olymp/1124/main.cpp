#include <bits/stdc++.h>

using namespace std;

#ifndef EOLIMP
#define cin in
ifstream in("/home/lionell/Developing/acm/e-olymp/1124/in.txt");
#endif

int main() {
    ios_base::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    vector<vector<char> > m(n + 0UL, vector<char>(n + 1UL, ' '));
    for (int i = 0; i < n; ++i) {
        m[i][0] = 'a';
        for (int j = 0; j < n - i; ++j) {
            m[n - 1 - j][1 + i + j] = (char)('a' + i);
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n + 1; ++j) {
            cout << m[i][j];
        }
        cout << endl;
    }
    return 0;
}