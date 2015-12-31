/*
* Verdict: Tests passed
*/
#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#define cin in
#endif

int chars[26][26];

int main() {
    ifstream in("/home/lionell/Developing/acm/codeforces/round_296/in.txt");
    for (int i = 0; i < 26; ++i) {
        for (int j = 0; j < 26; ++j) {
            chars[i][j] = -1;
        }
    }
    int n = 0;
    cin >> n;
    string s = "", t = "";
    cin >> s >> t;
    int answer = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] != t[i]) answer++;
    }
    int a = -2, b = -2;
    bool bingo = false;
    bool good = false;
    for (int i = 0; i < n; ++i) {
        if (s[i] != t[i]) {
            if (chars[t[i] - 'a'][s[i] - 'a'] != -1) {
                a = chars[t[i] - 'a'][s[i] - 'a'];
                b = i;
                bingo = true;
                break;
            }
            else {
                for (int j = 0; j < 26; ++j) {
                    if (chars[t[i] - 'a'][j] != -1) {
                        a = chars[t[i] - 'a'][j];
                        b = i;
                        good = true;
                        break;
                    }
                }
                if (!good) {
                    for (int j = 0; j < 26; ++j) {
                        if (chars[j][s[i] - 'a'] != -1) {
                            a = chars[j][s[i] - 'a'];
                            b = i;
                            good = true;
                            break;
                        }
                    }
                }
            }
            chars[s[i] - 'a'][t[i] - 'a'] = i;
        }
    }
    if (bingo) answer -= 2;
    else if (good) answer -= 1;
    cout << answer << endl;
    cout << a + 1 << ' ' << b + 1;
    return 0;
}