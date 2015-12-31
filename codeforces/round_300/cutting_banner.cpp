#include <bits/stdc++.h>

using namespace std;

string example = "CODEFORCES";

int main() {
    string s = "";
    cin >> s;
    int s_length = (int)s.length();
    int example_length = (int)example.length();
    int left = 0;
    while (left < s_length && left < example_length && s[left] == example[left])
        ++left;
    int right = 0;
    while (right < s_length && right < example_length && s[s_length - 1 - right] == example[example_length - 1 - right])
        ++right;
    cout << ((left + right >= example_length) ? "YES" : "NO");
    return 0;
}