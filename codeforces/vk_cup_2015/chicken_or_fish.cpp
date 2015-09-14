#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#define cin in
#endif

int main() {
    ios_base::sync_with_stdio(false);
    ifstream in("/home/lionell/Developing/acm/codeforces/VK_Cup_2015/in.txt");
    int q = 0;
    cin >> q;
    for (int j = 0; j < q; ++j) {
        int m = 0, k = 0;
        cin >> m >> k;
        int *a = new int[k + 1]();
        bool *empty = new bool[k + 1]();
        for (int i = 1; i <= k; ++i) {
            cin >> a[i];
        }
        int *t = new int[m - 1]();
        int *r = new int[m - 1]();
        for (int i = 0; i < m - 1; ++i) {
            cin >> t[i] >> r[i];
        }
        int accumulator = 0;
        int one_index = -1;
        for (int i = 0; i < m - 1; ++i) {
            if (r[i] == 1) {
                one_index = i;
                break;
            }
            if (t[i] != 0) a[t[i]]--;
            else accumulator++;
        }
        if (one_index != -1) {
            // One found
            bool *used = new bool[k + 1]();
            for (int i = one_index; i < m - 1; ++i) {
                used[t[i]] = true;
            }
            for (int i = 1; i <= k; ++i) {
                if (!used[i] && a[i] - accumulator <= 0) empty[i] = true;
            }
            // Find first used false
            int minimum = 0;
            for (int i = 1; i <= k; ++i) {
                if (!used[i]) {
                    minimum = i;
                    break;
                }
            }
            for (int i = minimum; i <= k; ++i) {
                if (!used[i] && a[i] < a[minimum]) minimum = i;
            }
            accumulator -= a[minimum];
            a[minimum] = 0;
            for (int i = one_index; i < m - 1; ++i) {
                if (t[i] != 0) a[t[i]]--;
                else accumulator++;
            }
            delete[] used;
        }
        for (int i = 1; i <= k; ++i) {
            if (a[i] - accumulator <= 0) empty[i] = true;
            cout << ((empty[i]) ? 'Y' : 'N');
        }
        cout << endl;
        delete[] r;
        delete[] t;
        delete[] empty;
        delete[] a;
    }
    return 0;
}