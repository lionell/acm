/*
 * Author: Ruslan Sakevych
 * Verdict: Accepted
*/

#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#define cin in
ifstream in("/home/lionell/Developing/acm/codeforces/round_302/in.txt");
#endif

bool used[26];

int main() {
    int k = 0;
    string s;
    cin >> k >> s;
    int s_length = (int)s.length();
    vector<string> answer;
    int i = 0;
    while (i < s_length) {
        used[s[i]] = true;
        int j = i;
        while (j < s_length && used[s[j]]) ++j;
        answer.push_back(s.substr(i * 1UL, j - i * 1UL));
        i = j;
    }
    if (answer.size() >= k) {
        cout << "YES" << endl;
        k--;
        for (int i = 0; i < answer.size(); ++i) {
            cout << answer[i];
            if (k > 0) {
                cout << endl;
                k--;
            }
        }
    } else cout << "NO";
    return 0;
}