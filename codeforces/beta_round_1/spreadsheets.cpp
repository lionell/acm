//
// Created by lionell on 4/8/15.
//

#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#define cin in
ifstream in("/home/lionell/Developing/acm/codeforces/beta_round_1/in.txt");
#endif

bool is_first(string s) {
    int i = 0;
    while (i < s.length() && isalpha(s[i])) ++i;
    while (i < s.length() && isdigit(s[i])) ++i;
    return (i == (int)s.length());
}

string first_to_second(string s) {
    // ABC123
    int i = 0;
    int col = 0;
    while (i < s.length() && isalpha(s[i])) {
        col = col * 26 + s[i] - 'A' + 1;
        ++i;
    }
    int row = 0;
    while (i < s.length() && isdigit(s[i])) {
        row = row * 10 + s[i] - '0';
        ++i;
    }
    string result = "R" + to_string(row) + "C" + to_string(col);
    return result;
}

string second_to_first(string s) {
    // R123C123
    int i = 1;
    int row = 0;
    while (i < s.length() && isdigit(s[i])) {
        row = row * 10 + s[i] - '0';
        ++i;
    }
    ++i;
    int col = 0;
    while (i < s.length() && isdigit(s[i])) {
        col = col * 10 + s[i] - '0';
        ++i;
    }
    string result = "";
    while (col > 0) {
        result += 'A' + (col % 27 - 1);
        col /= 27;
        if (col != 0 && col % 27 == 0) col += 1;
    }
    reverse(result.begin(), result.end());
    result += to_string(row);
    return result;
}

int main() {
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string notation = "";
        cin >> notation;
        cout << ((is_first(notation)) ? first_to_second(notation) : second_to_first(notation)) << endl;
    }
    return 0;
}
