//
// Created by lionell on 5/16/15.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    string s = "";
    int i = 0, j = 0;
    cin >> s >> i >> j;
    i--;
    j--;
    while (i < j) {
        swap(s[i], s[j]);
        i++;
        j--;
    }
    cout << s;
    return 0;
}