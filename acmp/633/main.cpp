#include <bits/stdc++.h>

using namespace std;

string names[3];

int main() {
    string name;
    getline(cin, name);
    getline(cin, names[0]);
    getline(cin, names[1]);
    getline(cin, names[2]);
    sort(names, names + 3);
    cout << name << ": " << names[0] << ", " << names[1] << ", " << names[2];
    return 0;
}