#include <bits/stdc++.h>

using namespace std;

#ifndef EOLIMP
#define cin in
ifstream in("/home/lionell/Developing/acm/e-olymp/930/in.txt");
#endif

bool used[10];

int main() {
    ios_base::sync_with_stdio(false);
    string s = "";
    getline(cin, s);
    int count = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (isdigit(s[i]) && !used[s[i] - '0']) {
            used[s[i] - '0'] = true;
            count++;
        }
    }
    cout << (10 - count);
    if (count < 10) cout << endl;
    for (int i = 0; i < 10; ++i) {
        if (!used[i]) cout << i << " ";
    }
    cout << endl;
    return 0;
}