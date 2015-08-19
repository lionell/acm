/*
* Verdict: Accepted
*/
#include <bits/stdc++.h>

#ifndef ONLINE_JUDGE
#define cin in
#endif

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    ifstream in("/home/lionell/Developing/acm/codeforces/round_239/in.txt");
    string available = "", required = "";
    cin >> available >> required;
    int *available_array = new int[26]();
    for (int i = 0; i < available.length(); ++i) {
        available_array[available[i] - 'a']++;
    }
    int *required_array = new int[26]();
    for (int i = 0; i < required.length(); ++i) {
        required_array[required[i] - 'a']++;
    }
    int area = 0;
    bool impossible = false;
    for (int i = 0; i < 26; ++i) {
        area += min(available_array[i], required_array[i]);
        if (required_array[i] > 0 && available_array[i] == 0) {
            impossible = true;
            break;
        }
    }
    cout << ((impossible) ? -1 : area);
    delete[] available_array;
    delete[] required_array;
    return 0;
}