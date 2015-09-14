//
// Created by lionell on 4/26/15.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    vector<int> nd;
    int maximal = 0;
    while (n > 0) {
        nd.push_back(n % 10);
        if (n % 10 > maximal) maximal = n % 10;
        n /= 10;
    }
    cout << maximal << endl;
    for (int i = 0; i < maximal; ++i) {
        bool found = false;
        for (int j = (int)nd.size() - 1; j >= 0; --j) {
            found |= (nd[j] > 0);
            if (found) {
                if (nd[j] > 0) {
                    cout << 1;
                    nd[j]--;
                } else cout << 0;
            }
        }
        cout << " ";
    }
    return 0;
}