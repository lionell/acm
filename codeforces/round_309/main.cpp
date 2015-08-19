#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#define cin in
ifstream in("/home/lionell/Developing/acm/codeforces/round_309/in.txt");
#endif

int main() {
    string s = "";
    cin >> s;
    int answer = 25 * (int)s.length() + 26;
    cout << answer;
    return 0;
}