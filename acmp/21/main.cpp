#include <bits/stdc++.h>

using namespace std;

int main() {
    int a;
    int b;
    int c;
    scanf("%d %d %d", &a, &b, &c);
    int arr[] = {a, b, c};
    sort(arr, arr + 3);
    printf("%d", arr[2] - arr[0]);
    return 0;
}