//
// Created by lionell on 5/8/15.
//

#include <bits/stdc++.h>

#define DEBUG

using namespace std;

#ifdef DEBUG
#define cin in
ifstream in("/home/lionell/Developing/acm/yandex_contests/algorithm_2015/warm_up/in.txt");
#endif

bool v[1000][1000];

pair<int, int> degrees[1000];

int main() {
    int n = 0, m = 0, k = 0;
    cin >> n >> m >> k;
    for (int i = 0; i < n; ++i) {
        degrees[i] = {2 * m / n + (i < (2 * m) % n), i};
    }
    for (int i = 0; i < n; ++i) {
        sort(degrees + i, degrees + n, greater<pair<int, int>>());
        if (degrees[i].first == 0) break;
        for (int j = i + 1; j <= i + degrees[i].first; ++j) {
            v[degrees[i].second][degrees[j].second] = v[degrees[j].second][degrees[i].second] = true;
            degrees[j].first--;
            m--;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (v[i][j]) printf("%d %d\n", i + 1, j + 1);
        }
    }
    return 0;
}