/*
* Verdict: Accepted
*/
#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#define cin in
#endif

string next(string origin) {
    string result = origin;
    int i = static_cast<int>(origin.length()) - 1;

    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    ifstream in("/home/lionell/Developing/acm/codeforces/round_293/in.txt");
    string s = "", t = "";
    cin >> s >> t;
    int i = static_cast<int>(s.length());
    do {
        i--;
        if (s[i] == 'z') s[i] = 'a';
        else s[i]++;
    } while (i > 0 && s[i] == 'a');
    cout << ((s == t) ? "No such string" : s);
    return 0;
}