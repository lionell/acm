#include <bits/stdc++.h>

using namespace std;

#define len(x) (int) x.length()

string a, b;

string find_min(int i, int j) {
    stringstream ss;
    while (i < len(a) || j < len(b)) {
        if (j == len(b) || i < len(a) && a[i] < b[j]) {
            ss << a[i++];
        } else if (i == len(a) || j < len(b) && b[j] < a[i]) {
            ss << b[j++];
        } else {
            ss << a[i];
            ss << min(find_min(i + 1, j), find_min(i, j + 1));
            break;
        }
    }
    return ss.str();
}

int main() {
    cin >> a >> b;
    cout << find_min(0, 0);
    return 0;
}