/*
* Author: Ruslan Sakevych
* Complexity: O(n*log2(n))~O(n^2)
*/
#define DEBUG

#include <iostream>
#include <fstream>

#ifdef DEBUG
#define cout out
#define cin in
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
    int n = 0, k = 0;
    cin >> n >> k;
    int *times = new int[n];
    for (int i = 0; i < n; ++i) {
        int hours = 0, minutes = 0;
        cin >> hours >> minutes;
        times[i] = hours*minutes;
    }
    sort(times, begin(times), end(times));
    int current = -1;
    int count = 0;
    bool impossible = false;
    int answer = -1;
    for (int i = 0; i < n; ++i) {
        if (times[i] != current) {
            if (count == n-k) {
                if (answer == -1) answer = count;
                else impossible = true;
            }
            if (count > n-k) impossible = true;
            current = times[i];
            count = 0;
        }
        else count++;
        if (impossible) break;
    }
    if (answer == -1) impossible = true;
    if (impossible) cout << "-1";
    else PrintTime(answer);
    delete[] times;
    return 0;
}

