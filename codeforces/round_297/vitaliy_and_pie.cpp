//
// Created by lionell on 3/26/15.
//

#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#define cin in
ifstream in("/home/lionell/Developing/acm/codeforces/round_297/in.txt");
#endif

int have[27];

int main() {
    ios_base::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    int answer = 0;
    for (int i = 0; i < n - 1; ++i) {
        char k = 0, l = 0;
        cin >> k >> l;
        have[k - 'a']++;
        if (have[l - 'A'] == 0) {
            answer++;
        }
        else have[l - 'A']--;
    }
    cout << answer;
    return 0;
}