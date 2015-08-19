//#include <bits/stdc++.h>
#include <sstream>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

#define cin in

#ifndef ACMP
ifstream in("/home/lionell/Developing/acm/acmp/314/in.txt");
#else
#define cout out
ifstream in("input.txt");
ofstream out("output.txt");
#endif

#define endl "\n"

void counting_sort(vector<string> &a, int digit) {
    vector<int> c(11);
    for (auto word: a) {
        if (word.length() <= digit) {
            c[0]++;
        } else {
            c[word[digit] - '0' + 1]++;
        }
    }
    for (int i = 1; i < 11; ++i) {
        c[i] += c[i - 1];
    }
    vector<string> b(a.size());
    for (int i = (int)a.size() - 1; i >= 0; --i) {
        string &word = a[i];
        int index = (word.length() <= digit) ? 0 : (word[digit] - '0' + 1);
        b[c[index] - 1] = word;
        c[index]--;
    }
    a.swap(b);
}

void radix_sort(vector<string> &a) {
    int max_length = 0;
    for (auto word: a) {
        max_length = max(max_length, (int)word.length());
    }
    for (int i = max_length - 1; i >= 0; --i) {
        counting_sort(a, i);
    }
}

string to_str(int x) {
    stringstream ss;
    ss << x;
    return ss.str();
}

int main() {
    //ios_base::sync_with_stdio(false); cin.tie(0);
    int n = 0, k = 0;
    cin >> n >> k;
    vector<string> a(n + 0UL);
    for (int i = 0; i < n; ++i) {
        a[i] = to_str(i + 1);
    }
    radix_sort(a);
    int answer = -1;
    for (int i = 0; i < n; ++i) {
        if (a[i] == to_str(k)) {
            answer = i;
            break;
        }
    }
    cout << answer + 1;
    return 0;
}