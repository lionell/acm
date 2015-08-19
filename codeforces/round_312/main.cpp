#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#define cin in
ifstream in("/home/lionell/Developing/acm/codeforces/round_312/in.txt");
#endif

#define endl "\n"
#define all(c) begin(c), end(c)
#define eb emplace_back
#define size(c) (int)((c).size())
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<bool> vb;
typedef pair<int, int> ii;

template<typename T>
void print(vector<T> &a) {
    for (auto x: a) {
        cout << x << " ";
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n = 0;
    cin >> n;
    vector<ii> b(n + 0UL);
    for (int i = 0; i < n; ++i) {
        int x = 0, a = 0;
        cin >> x >> a;
        b[i] = {x, a};
    }
    sort(all(b));
    int k = 0;
    while (b[k].first < 0) {
        ++k;
    }
    long long sum = 0;
    int i = k - 1;
    int j = k;
    while (i >= 0 && j < n) {
        sum += b[i].second;
        --i;
        sum += b[j].second;
        ++j;
    }
    ll sum1 = sum, sum2 = sum;
    if (i >= 0) {
        sum1 += b[i].second;
    } else if (j < n) {
        sum2 += b[j].second;
    }
    cout << max(sum1, sum2);
    return 0;
}