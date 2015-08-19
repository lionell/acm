//
// Created by lionell on 5/8/15.
// Verdict: WA3
//

#include <bits/stdc++.h>

#define DEBUG

using namespace std;

#ifdef DEBUG
#define cin in
ifstream in("/home/lionell/Developing/acm/yandex_contests/algorithm_2015/warm_up/in.txt");
#endif

int w = 0, h = 0;
pair<int, int> moves[] = {{1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
bool used[51][51][51][51];

struct Node {
    pair<int, int> first;
    pair<int, int> second;
    int from;
};

bool check(pair<int, int> p) {
    return (p.first >= 1 && p.first <= w && p.second >= 1 && p.second <= h);
};

int main() {
    int p1 = 0, q1 = 0, p2 = 0, q2 = 0, x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    cin >> w >> h >> p1 >> q1 >> p2 >> q2 >> x1 >> y1 >> x2 >> y2;
    queue<Node> q;
    vector<Node> o;
    q.push({{x1, y1}, {x2, y2}, -1});
    bool found = false;
    while (!q.empty() && !found) {
        Node &node = q.front(); q.pop();
        if (node.first != node.second) {
            for (int i = 0; i < 4; ++i) {
                for (int j = 0; j < 4; ++j) {
                    pair<int, int> f1 = {node.first.first + p1 * moves[i].first, node.first.second + q1 * moves[i].second};
                    pair<int, int> f2 = {node.first.first + q1 * moves[i].first, node.first.second + p1 * moves[i].second};
                    pair<int, int> s1 = {node.second.first + p2 * moves[i].first, node.second.second + q2 * moves[i].second};
                    pair<int, int> s2 = {node.second.first + q2 * moves[i].first, node.second.second + p2 * moves[i].second};
                    if (check(f1) && check(s1) && !used[f1.first][f1.second][s1.first][s1.second]) {
                        q.push({f1, s1, (int)o.size()});
                        used[f1.first][f1.second][s1.first][s1.second] = true;
                    }
                    if (check(f1) && check(s2) && !used[f1.first][f1.second][s2.first][s2.second]) {
                        q.push({f1, s2, (int)o.size()});
                        used[f1.first][f1.second][s2.first][s2.second] = true;
                    }
                    if (check(f2) && check(s1) && !used[f2.first][f2.second][s1.first][s1.second]) {
                        q.push({f2, s1, (int)o.size()});
                        used[f2.first][f2.second][s1.first][s1.second]= true;
                    }
                    if (check(f2) && check(s2) && !used[f2.first][f2.second][s2.first][s2.second]) {
                        q.push({f2, s2, (int)o.size()});
                        used[f2.first][f2.second][s2.first][s2.second]= true;
                    }
                }
            }
        } else found = true;
        o.push_back(node);
    }
    if (found) {
        vector<pair<pair<int, int>, pair<int, int> > > answer;
        Node node = o.back();
        while (node.from != -1) {
            answer.push_back({node.first, node.second});
            node = o[node.from];
        }
        answer.push_back({node.first, node.second});
        cout << (int)answer.size() - 1 << endl;
        for (int i = (int)answer.size() - 1; i >= 0; --i) {
            cout << answer[i].first.first << " " << answer[i].first.second << " " << answer[i].second.first << " " << answer[i].second.second << endl;
        }
    } else cout << -1;
    return 0;
}