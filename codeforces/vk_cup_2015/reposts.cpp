#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#define cin in
#endif

string to_lower(string origin) {
    string result = "";
    for (int i = 0; i < origin.length(); ++i) {
        result += tolower(origin[i]);
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    ifstream in("/home/lionell/Developing/acm/codeforces/VK_Cup_2015/in.txt");
    int n = 0;
    cin >> n;
    map<string, int> hash;
    hash["polycarp"] = 1;
    int maximum = 1;
    for (int i = 0; i < n; ++i) {
        string who = "";
        string followed = "";
        string whom = "";
        cin >> who >> followed >> whom;
        string who_lower = to_lower(who);
        string whom_lower = to_lower(whom);
        hash[who_lower] = hash[whom_lower] + 1;
        maximum = max(maximum, hash[who_lower]);
    }
    cout << maximum;
    return 0;
}