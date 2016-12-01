#include <bits/stdc++.h>

using namespace std;

typedef pair<double, string> is;
typedef vector<is> vis;

#define eb emplace_back
#define all(x) begin(x), end(x)

int main() {
    int n;
    cin >> n;
    vis a;
    for (int i = 0; i < n; ++i) {
        int m;
        cin >> m;
        for (int j = 0; j < m; ++j) {
            double score;
            string name;
            cin >> score >> name;
            a.eb(score, name);
        }
    }
    sort(all(a), [](is& x, is& y){return x.first > y.first;});
    cout << a.size() << endl;
    cout.precision(2);
    for (is p : a) {
        cout << fixed << p.first << " " << p.second << endl;
    }
    return 0;
}