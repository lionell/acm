#include <bits/stdc++.h>

using namespace std;

typedef unsigned long ul;

int count(string s, string needle) {
    ul i = s.find(needle);
    int c = 0;
    while (i != string::npos) {
        s.replace(i + 2, 1, "#");
        i = s.find(needle);
        c++;
    }
    return c;
}

int main() {
    string s;
    cin >> s;
    cout << count(s, ">>-->") + count(s, "<--<<");
    return 0;
}