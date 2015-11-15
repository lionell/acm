//
// Created by lionell on 3/26/15.
//

#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#define cin in
ifstream in("/home/lionell/Developing/acm/codeforces/round_297/in.txt");
#endif

int main() {
    ios_base::sync_with_stdio(false);
    string s = "";
    cin >> s;
    int s_length = int(s.length());
    bool *reverse = new bool[s_length + 1]();
    int m = 0;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        int a = 0;
        cin >> a;
        reverse[a - 1] ^= 1;
        reverse[s_length - a + 1] ^= 1;
    }
    bool global_reverse = false;
    for (int i = 0; i < s_length; ++i) {
        global_reverse ^= reverse[i];
        cout << ((global_reverse) ? s[s_length - i - 1] : s[i]);
    }
    delete[] reverse;
    return 0;
}