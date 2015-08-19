#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#define cin in
ifstream in("/home/lionell/Developing/acm/codeforces/VK_Cup_2015/round_3/in.txt");
#endif

int main() {

    int n = 0, T = 0;
    cin >> n >> T;
    pair<int, int> *a = new pair<int, int>[n];
    for (int i = 0; i < n; ++i) {
        int t = 0, q = 0;
        cin >> t >> q;
        a[i] = {t, q};
    }
    sort(a, a + n, greater<pair<int, int> >());
    int i = 0;
    int answer = 0;
    while (a[i].first <= T) {
        answer += a[i].second;
        if (T != a[i].first) {
            T--;
            i++;
        } else break;
    }
    cout << answer;
    delete[] a;
    return 0;
}