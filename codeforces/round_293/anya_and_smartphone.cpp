/*
* Verdict: Accepted
*/
#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#define cin in
#endif

int main() {
    ios_base::sync_with_stdio(false);
    ifstream in("/home/lionell/Developing/acm/codeforces/round_293/in.txt");
    int n = 0, m = 0, k = 0;
    cin >> n >> m >> k;
    int *app_by_pos = new int[n];
    int *pos_by_app = new int[n + 1];
    for (int i = 0; i < n; ++i) {
        int app = 0;
        cin >> app;
        app_by_pos[i] = app;
        pos_by_app[app] = i;
    }
    long long gestures = 0;
    for (int i = 0; i < m; ++i) {
        int app = 0;
        cin >> app;
        gestures += ((pos_by_app[app] + 1) / k) + ((pos_by_app[app] + 1) % k != 0);
        if (pos_by_app[app] > 0) {
            int app_to_swap = app_by_pos[pos_by_app[app] - 1];
            swap(app_by_pos[pos_by_app[app]], app_by_pos[pos_by_app[app_to_swap]]);
            swap(pos_by_app[app], pos_by_app[app_to_swap]);
        }
    }
    cout << gestures;
    delete[] app_by_pos;
    delete[] pos_by_app;
    return 0;
}