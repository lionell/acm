#include <bits/stdc++.h>

using namespace std;

string to_string(int x) {
    stringstream ss;
    ss << x;
    return ss.str();
}

int main() {
    string s;
    cin >> s;
    int i = 0;
    while (s.length() != 1) {
        int sum = 0;
        for (char c : s) {
            sum += c - '0';
        }
        s = to_string(sum);
        i++;
    }
    cout << s << " " << i;
    return 0;
}