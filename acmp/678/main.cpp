#include <bits/stdc++.h>

using namespace std;

bool where[3];

int main() {
    string s;
    cin >> s;
    where[0] = true;
    for (char c : s) {
        switch(c) {
            case 'A':
                swap(where[0], where[1]);
                break;
            case 'B':
                swap(where[1], where[2]);
                break;
            case 'C':
                swap(where[0], where[2]);
                break;
        }
    }
    for (int i = 0; i < 3; ++i) {
        if (where[i]) {
            cout << i + 1;
        }
    }
    return 0;
}