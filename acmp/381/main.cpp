#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 41;

#define cin in
ifstream in("/home/lionell/dev/acm/acmp/381/in.txt");

typedef pair<int, int> pii;
typedef vector<pii> vii;

vii delta = {{0, -1}, {-1, 0}, {1, 0}, {0, 1}};
char world[MAX_N][MAX_N];
int n;
pii start;
pii finish;
char min_world[MAX_N][MAX_N];
int min_len;

pii add(pii a, pii b) {
    return {a.first + b.first, a.second + b.second};
}

bool check(pii p) {
    return p.first >= 0 && p.first < n && p.second >= 0 && p.second < n
           && (world[p.first][p.second] == '.' || world[p.first][p.second] == 'X');
}

void print_min() {
    world[start.first][start.second] = '@';
    world[finish.first][finish.second] = '+';
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << world[i][j];
        }
        cout << endl;
    }
}

void dfs(pii cur, int len) {
    if (min_len == abs(finish.first - start.first) + abs (finish.second - start.second))
        return;
    if (min_len != 0 && len >= min_len)
        return;
    if (world[cur.first][cur.second] == 'X') {
        memcpy(min_world, world, sizeof(char) * MAX_N * MAX_N);
        cout << endl << endl;
        print_min();
        min_len = len;
        return;
    }
    world[cur.first][cur.second] = '+';
    for (int i = 0; i < 4; ++i) {
        int r = rand() % 4;
        pii n;
        if (r == 0) {
            n = {cur.first + 1, cur.second};
        } else if (r == 1) {
            n = {cur.first - 1, cur.second};
        } else if (r == 2) {
            n = {cur.first, cur.second + 1};
        } else if (r == 3) {
            n = {cur.first, cur.second - 1};
        }
        if (check(n))
            dfs(n, len + 1);
    }
    world[cur.first][cur.second] = '.';
}

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> world[i][j];
            if (world[i][j] == '@') {
                start = {i, j};
            }
            if (world[i][j] == 'X') {
                finish = {i, j};
            }
        }
    }
    dfs(start, 0);
    if (min_len != 0) {
        cout << "Yes" << endl;
        print_min();
    } else {
        cout << "No" << endl;
    }
    in.close();
    return 0;
}