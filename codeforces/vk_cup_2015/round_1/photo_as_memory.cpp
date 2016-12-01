#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#define cin in
ifstream in("/home/lionell/Developing/acm/codeforces/VK_Cup_2015/round_1/in.txt");
#endif

int main() {
    int n = 0;
    cin >> n;
    int* w = new int[n]();
    int* h = new int[n]();
    int maximal = 0;
    for (int i = 0; i < n; ++i) {
        cin >> w[i] >> h[i];
        if (w[i] < h[i]) swap(w[i], h[i]);
        maximal = max(maximal, h[i]);
    }
    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        if (w[i] <= maximal) sum += h[i];
        else sum += w[i];
    }
    cout << maximal * sum;
    delete[] w;
    delete[] h;
    return 0;
}