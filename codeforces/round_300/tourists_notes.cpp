//
// Created by lionell on 4/26/15.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 0, m = 0;
    cin >> n >> m;
    int last_d = 1, last_h = -1;
    bool fail = false;
    int answer = 0;
    for (int i = 0; i < m; ++i) {
        int d = 0, h = 0;
        cin >> d >> h;
        if (last_h == -1)
            answer = max(answer, h + d - 1);
        else if (abs(last_h - h) <= (d - last_d)) {
            int delta_height = abs(last_h - h);
            int days_left = (d - last_d) - delta_height;
            int max_height = max(last_h, h) + days_left / 2;
            answer = max(answer, max_height);
        } else {
            fail = true;
            break;
        }
        last_h = h;
        last_d = d;
    }
    answer = max(answer, last_h + (n - last_d));
    if (!fail) cout << answer;
    else cout << "IMPOSSIBLE";
    return 0;
}