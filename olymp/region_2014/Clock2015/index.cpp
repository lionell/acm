/*
* Author: Ruslan Sakevych
* Complexity: O(n)
*/
#define DEBUG

#include <iostream>
#include <fstream>

#ifdef DEBUG
#define cin in
#define cout out
#endif

using namespace std;

#ifdef DEBUG
ifstream in("/home/lionell/Documents/Work/ACM/Olymp/VinRegion2014/Clock2015/in.txt");
ofstream out("/home/lionell/Documents/Work/ACM/Olymp/VinRegion2014/Clock2015/out.txt");
#endif

void PrintTime(int time) {
    cout << time / 60 << " " << time % 60;
}

int main() {
    int *index = new int[24 * 60]();
    int n = 0, k = 0;
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        int hours = 0, minutes = 0;
        cin >> hours >> minutes;
        index[60*hours + minutes]++;
    }
    bool impossible = false;
    int answer = -1;
    for (int i = 0; i < 24*60; ++i) {
        if (index[i] == n-k) {
            if (answer == -1) answer = i;
            else impossible = true;
        }
        if (index[i] > n-k) impossible = true;
        if (impossible) break;
    }
    if (answer == -1) impossible = true;
    if (impossible) cout << "-1";
    else PrintTime(answer);
    delete[] index;
    return 0;
}