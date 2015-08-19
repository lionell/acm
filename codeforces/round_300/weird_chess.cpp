//
// Created by lionell on 4/26/15.
//
// FAIL

#include <bits/stdc++.h>

using namespace std;

bool check(char **map, int n, pair<int, int> delta) {
    bool fail = false;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (map[i][j] == 'o' && i + delta.first < n && i + delta.first >= 0 && j + delta.second < n && j + delta.second >= 0) {
                fail |= (map[i + delta.first][j + delta.second] != 'x' && map[i + delta.first][j + delta.second] != '|');
            }
        }
    }
    return !fail;
}

void purge(char **map, int n, pair<int, int> delta) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (map[i][j] == 'o' && i + delta.first < n && i + delta.first >= 0 && j + delta.second < n && j + delta.second >= 0) {
                map[i + delta.first][j + delta.second] = '|';
            }
        }
    }
}

int main() {
    int n = 0;
    scanf("%d", &n);
    char **map = new char*[n];
    for (int i = 0; i < n; ++i) map[i] = new char[n]();
    char **answer = new char*[2 * n - 1];
    for (int i = 0; i < 2 * n - 1; ++i) {
        answer[i] = new char[2 * n - 1]();
        for (int j = 0; j < 2 * n - 1; ++j) answer[i][j] = '.';
    }
    answer[n - 1][n - 1] = 'o';
    pair<int, int> one;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf(" %c", &map[i][j]);
            if (map[i][j] == 'o') one = {i, j};
        }
    }
    vector<pair<int, int> > to_check;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (map[i][j] == 'x') to_check.push_back({i - one.first, j - one.second});
        }
    }
    for (int i = 0; i < to_check.size(); ++i) {
        if (check(map, n, to_check[i])) {
            purge(map, n, to_check[i]);
            answer[n - 1 + to_check[i].first][n - 1 + to_check[i].second] = 'x';
        }
    }
    bool fail = false;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            fail |= (map[i][j] == 'x');
        }
    }
    if (!fail) {
        printf("YES\n");
        for (int i = 0; i < 2 * n - 1; ++i) {
            for (int j = 0; j < 2 * n - 1; ++j)
                printf("%c", answer[i][j]);
            printf("\n");
        }
    } else printf("NO");
    for (int i = 0; i < n; ++i) delete[] map[i];
    delete[] map;
    for (int i = 0; i < 2 * n - 1; ++i) delete[] answer[i];
    delete[] answer;
    return 0;
}