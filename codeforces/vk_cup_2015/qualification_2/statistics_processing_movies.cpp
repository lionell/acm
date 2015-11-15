/*
* Verdict: Tests passed
*/
#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#define cin in
#endif

class Compare {
public:
    bool operator() (pair<int, long long> a, pair<int, long long> b)
    {
        return (a.second > b.second);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    ifstream in("/home/lionell/Developing/acm/codeforces/VK_Cup_2015/qualification_2/in.txt");
    int n = 0, k = 0;
    cin >> n >> k;
    long long *s = new long long[n]();
    long long *m = new long long[n]();
    long long *answer = new long long[n]();
    for (int i = 0; i < n; ++i) {
        cin >> s[i] >> m[i];
    }
    queue<pair<int, long long> > waiting;
    priority_queue<pair<int, long long>, vector<pair<int, long long> >, Compare> working;
    int index = 0;
    while (index < n || !working.empty()) {
        if (!working.empty() && ((index >= n) || (index < n && working.top().second <= s[index]))) {
            long long release_time = working.top().second;
            answer[working.top().first] = release_time;
            working.pop();
            if (!waiting.empty()) {
                working.push({ waiting.front().first, release_time + waiting.front().second });
                waiting.pop();
            }
        }
        else {
            if (working.size() < k) {
                working.push({ index, s[index] + m[index] });
            }
            else {
                waiting.push({ index, m[index] });
            }
            index++;
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << answer[i] << endl;
    }
    delete[] s;
    delete[] m;
    delete[] answer;
    return 0;
}