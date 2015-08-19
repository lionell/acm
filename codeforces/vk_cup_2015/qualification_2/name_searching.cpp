/*
* Verdict: Tests passed
*/
#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#define cin in
#endif

int find_left(string t, string s) {
    int needle_index = 0;
    int stack_index = 0;
    while (stack_index < t.length()) {
        if (t[stack_index] == s[needle_index]) {
            needle_index++;
        }
        if (needle_index >= s.length()) break;
        stack_index++;
    }
    return stack_index;
}

int find_right(string t, string s) {
    int needle_index = int(s.length() - 1);
    int stack_index = int(t.length() - 1);
    while (stack_index >= 0) {
        if (t[stack_index] == s[needle_index]) {
            needle_index--;
        }
        if (needle_index < 0) break;
        stack_index--;
    }
    return stack_index;
}

int main() {
    ios_base::sync_with_stdio(false);
    ifstream in("/home/lionell/Developing/acm/codeforces/VK_Cup_2015/qualification_2/in.txt");
    string s = "";
    cin >> s;
    string t = "";
    cin >> t;
    int left_index = find_left(t, s);
    int right_index = find_right(t, s);
    if (right_index >= left_index) cout << (right_index - left_index);
    else cout << 0;
    return 0;
}