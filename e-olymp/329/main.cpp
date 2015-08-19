#include <bits/stdc++.h>

using namespace std;

#ifndef EOLIMP
#define cin in
ifstream in("/home/lionell/Developing/acm/e-olymp/329/in.txt");
#endif

int main() {
    ios_base::sync_with_stdio(false);
    string s = "";
    getline(cin, s);
    int answer = 0, i = 0;
    do {
        while (i < s.length() && (isblank(s[i]) || s[i] == '/')) ++i;
        if (i < s.length()) answer++;
        while (i < s.length() && !(isblank(s[i]) || s[i] == '/')) ++i;
    } while (i < s.length());
    cout << answer;
    cout << endl;
    return 0;
}