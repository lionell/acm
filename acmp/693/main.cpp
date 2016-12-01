#include <bits/stdc++.h>

using namespace std;

bool check(string s1, string s2) {
    multiset<char> ms;
    for (char c : s1) {
        ms.insert((char) tolower(c));
    }
    for (char c: s2) {
        auto where = ms.find((char) tolower(c));
        if (where == end(ms))
            return false;
        ms.erase(where);
    }
    return ms.size() == 0;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    cout << (check(s1, s2) ? "Yes" : "No");
    return 0;
}