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
    ifstream in("/home/lionell/Developing/acm/codeforces/round_240/in.txt");
    int n = 0, m = 0;
    cin >> n >> m;
    int *lights = new int[n + 1]();
    int right = n;
    for (int i = 0; i < m; ++i) {
        int light = 0;
        cin >> light;
        if (right >= light) {
            for (int j = light; j <= right; ++j) {
                lights[j] = light;
            }
            right = light - 1;
        }
    }
    for (int i = 1; i <= n; ++i) {
        cout << lights[i] << " ";
    }
    delete[] lights;
    return 0;
}