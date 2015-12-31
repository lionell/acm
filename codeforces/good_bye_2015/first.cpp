#include <bits/stdc++.h>

using namespace std;

int week[] = {52, 52, 52, 52, 53, 53, 52};

int eval(int d, string s) {
    if (s == "week") {
        return week[d - 1];
    } else {
        if (d <= 29)
            return 12;
        else if (d == 30)
            return 11;
        else if (d == 31)
            return 7;
    }
}

int main() {
    int d;
    string s;
    cin >> d >> s >> s;
    cout << eval(d, s);
    return 0;
}