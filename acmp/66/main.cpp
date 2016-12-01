#include <bits/stdc++.h>

using namespace std;

string qwerty = "qwertyuiopasdfghjklzxcvbnm";

int main() {
    char c;
    cin >> c;
    int i = qwerty.find(c);
    cout << qwerty[(i + 1) % 26];
    return 0;
}