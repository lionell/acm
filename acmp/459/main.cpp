#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

bool world[401][401];
pii start = {200, 200};
int d[401][401];
int from[401][401];
queue<pii> q;

void add(int x, int y, int k, int f) {
    if (!world[x][y] || d[x][y] != -1)
        return;
    d[x][y] = k;
    from[x][y] = f;
    q.push({x, y});
}

int main() {
    for (int i = 0; i < 401; ++i) {
        for (int j = 0; j < 401; ++j) {
            d[i][j] = -1;
        }
    }
    string s;
    cin >> s;
    pii cur = start;
    world[start.first][start.second] = true;
    for (char c : s) {
        switch(c) {
            case 'N':
                cur.first--;
                break;
            case 'S':
                cur.first++;
                break;
            case 'W':
                cur.second--;
                break;
            case 'E':
                cur.second++;
                break;
        }
        world[cur.first][cur.second] = true;
    }
    pii end = cur;
    q.push(start);
    d[start.first][start.second] = 0;
    while (d[end.first][end.second] == -1) {
        cur = q.front(); q.pop();
        add(cur.first, cur.second + 1, d[cur.first][cur.second] + 1, 3);
        add(cur.first, cur.second - 1, d[cur.first][cur.second] + 1, 4);
        add(cur.first + 1, cur.second, d[cur.first][cur.second] + 1, 1);
        add(cur.first - 1, cur.second, d[cur.first][cur.second] + 1, 2);
    }
    cur = end;
    while (cur.first != start.first || cur.second != start.second) {
        switch(from[cur.first][cur.second]) {
            case 1:
                cout << "N";
                cur.first--;
                break;
            case 2:
                cout << "S";
                cur.first++;
                break;
            case 3:
                cout << "W";
                cur.second--;
                break;
            case 4:
                cout << "E";
                cur.second++;
                break;
        }
    }
    return 0;
}