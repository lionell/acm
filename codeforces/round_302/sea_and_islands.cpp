/*
 * Author: Ruslan Sakevych
 * Verdict: Accepted
*/

#include <bits/stdc++.h>

using std::cout;
using std::cin;
using std::endl;

#ifndef ONLINE_JUDGE
#define cin in
std::ifstream in("/home/lionell/Developing/acm/codeforces/round_302/in.txt");
#endif

bool map[101][101];

int main() {
    int n = 0, k = 0;
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if ((i + j) % 2 == 0 && k > 0) {
                map[i][j] = true;
                k--;
            }
        }
    }
    if (k == 0) {
        cout << "YES" << endl;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << (map[i][j] ? 'L' : 'S');
            }
            cout << endl;
        }
    } else cout << "NO";
    return 0;
}