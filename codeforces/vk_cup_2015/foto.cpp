#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#define cin in
#endif

int arr[200001][2];

int main() {
    ios_base::sync_with_stdio(false);
    ifstream in("/home/lionell/Developing/acm/codeforces/VK_Cup_2015/in.txt");
    int n = 0, w = 0, h = 0, sumWidth = 0, maxHeight = 0, previousMaxHeight = 0, tempHeight = 0, photoSize = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> w >> h;
        arr[i][0] = w;
        arr[i][1] = h;
        sumWidth += w;
        if (h > arr[maxHeight][1]) {
            previousMaxHeight = maxHeight;
            maxHeight = i;
        }
        else if (h > arr[previousMaxHeight][1]) previousMaxHeight = i;
    }
    for (int i = 1; i <= n; i++) {
        tempHeight = (i == maxHeight) ? arr[previousMaxHeight][1] : arr[maxHeight][1];
        photoSize = tempHeight * (sumWidth - arr[i][0]);
        cout << photoSize << ' ';
    }
    return 0;
}