/*
* Verdict: Accepted
*/
#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#define cin in
#endif

const int INF = static_cast<int>(1e9);

int main() {
    ifstream in("/home/lionell/Developing/acm/codeforces/round_239/in.txt");
    int n = 0;
    cin >> n;
    int *k = new int[n];
    int **m = new int*[n];
    for (int i = 0; i < n; ++i) {
        cin >> k[i];
        m[i] = new int[k[i]];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < k[i]; ++j) {
            cin >> m[i][j];
        }
    }
    int minimum = INF;
    for (int i = 0; i < n; ++i) {
        int time = k[i] * 15;
        for (int j = 0; j < k[i]; ++j) {
            time += m[i][j] * 5;
        }
        minimum = min(minimum, time);
    }
    cout << minimum;
    for (int i = 0; i < n; ++i) {
        delete[] m[i];
    }
    delete[] m;
    delete[] k;
    return 0;
}