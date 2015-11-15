/*
* Verdict: Wrong Answer on pretest 8
*/
#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#define cin in
#endif

char switch_case(char original) {
    return (isupper(original)) ? tolower(original) : toupper(original);
}

int main() {
    ios_base::sync_with_stdio(false);
    ifstream in("/home/lionell/Developing/acm/codeforces/round_293/in.txt");
    string s = "", t = "";
    cin >> s >> t;
    int *available = new int[255]();
    for (int i = 0; i < t.length(); ++i) {
        available[t[i]]++;
    }
    int yays = 0, whoops = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (available[s[i]] > 0) {
            yays++;
            available[s[i]]--;
        }
        else if (available[switch_case(s[i])] > 0) {
            whoops++;
            available[switch_case(s[i])]--;
        }
    }
    cout << yays << " " << whoops;
    delete[] available;
    return 0;
}