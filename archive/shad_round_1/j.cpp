//
// Created by lionell on 5/16/15.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    vector<pair<int, int>> marks;
    for (int i = 0; i < n; ++i) {
        int id = 0, mark = 0;
        cin >> id >> mark;
        marks.emplace_back(mark, -id);
    }
    sort(marks.begin(), marks.end(), greater<pair<int, int>>());
    for (int i = 0; i < n; ++i) {
        cout << -marks[i].second << " " << marks[i].first << endl;
    }
    return 0;
}