//
// Created by lionell on 3/28/15.
//

#include <bits/stdc++.h>

bool check(char** map, int i, int j) {
    return (map[i][j] == '.' && map[i][j + 1] == '.' && map[i + 1][j] == '.' && map[i + 1][j + 1] == '*') ||
           (map[i][j] == '.' && map[i][j + 1] == '.' && map[i + 1][j] == '*' && map[i + 1][j + 1] == '.') ||
           (map[i][j] == '.' && map[i][j + 1] == '*' && map[i + 1][j] == '.' && map[i + 1][j + 1] == '.') ||
           (map[i][j] == '*' && map[i][j + 1] == '.' && map[i + 1][j] == '.' && map[i + 1][j + 1] == '.');
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("/home/lionell/Developing/acm/codeforces/round_297/in.txt", "r", stdin);
    freopen("/home/lionell/Developing/acm/codeforces/round_297/out.txt", "w", stdout);
#endif
    //std::ios_base::sync_with_stdio(false);
    int n = 0, m = 0;
    //std::cin >> n >> m;
    scanf("%d%d", &n, &m);

    char **map = new char*[n]();
    for (int i = 0; i < n; ++i) map[i] = new char[m]();

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            //std::cin >> map[i][j];
            scanf(" %c", &map[i][j]);
        }
    }

    std::queue<std::pair<int, int> > q;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < m - 1; ++j) {
            if (check(map, i, j)) q.push({i, j});
        }
    }

    while (!q.empty()) {
        int i = q.front().first;
        int j = q.front().second;
        q.pop();
        if (check(map, i, j)) {
            map[i][j] = '.';
            map[i][j + 1] = '.';
            map[i + 1][j] = '.';
            map[i + 1][j + 1] = '.';
            if (i + 1 < n - 1 && check(map, i + 1, j)) q.push({i + 1, j});
            if (i - 1 >= 0 && check(map, i - 1, j)) q.push({i - 1, j});
            if (j + 1 < m - 1 && check(map, i, j + 1)) q.push({i, j + 1});
            if (j - 1 >= 0 && check(map, i, j - 1)) q.push({i, j - 1});
        }
        /*if (map[i][j] == '.' && map[i][j + 1] == '.' && map[i + 1][j] == '.' && map[i + 1][j + 1] == '*') {
            map[i + 1][j + 1] = '.';
            if (i + 1 < n - 1) q.push({i + 1, j});
            if (j + 1 < m - 1) q.push({i, j + 1});
        }
        else if (map[i][j] == '.' && map[i][j + 1] == '.' && map[i + 1][j] == '*' && map[i + 1][j + 1] == '.') {
            map[i + 1][j] = '.';
            if (i + 1 < n - 1) q.push({i + 1, j});
            if (j - 1 >= 0) q.push({i, j - 1});
        }
        else if (map[i][j] == '.' && map[i][j + 1] == '*' && map[i + 1][j] == '.' && map[i + 1][j + 1] == '.') {
            map[i][j + 1] = '.';
            if (i - 1 >= 0) q.push({i - 1, j});
            if (j + 1 < m - 1) q.push({i, j + 1});
        }
        else if (map[i][j] == '*' && map[i][j + 1] == '.' && map[i + 1][j] == '.' && map[i + 1][j + 1] == '.') {
            map[i][j] = '.';
            if (i - 1 >= 0) q.push({i - 1, j});
            if (j - 1 >= 0) q.push({i, j - 1});
        }*/
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            //std::cout << map[i][j];
            printf("%c", map[i][j]);
        }
        //std::cout << std::endl;
        printf("\n");
    }

    for (int i = 0; i < n; ++i) delete[] map[i];
    delete[] map;

#ifndef ONLINE_JUDGE
    fclose(stdin);
    fclose(stdout);
#endif
    return 0;
}