#include <bits/stdc++.h>

using namespace std;

#ifndef EOLIMP
#define cin in
ifstream in("/home/lionell/Developing/acm/e-olymp/901/in.txt");
#endif

int main() {
    ios_base::sync_with_stdio(false);
    string s = "";
    getline(cin, s);
    int answer = 0;
    answer -= (s[0] == '-' || s[0] == '+');
    for (int i = 0; i < s.length(); ++i) {
        answer += (s[i] == '+' || s[i] == '-' || s[i] == '*');
    }
    cout << answer;
    cout << endl;
    return 0;
}