//
// Created by lionell on 27.12.2015.
// Copyright (c) 2015 Ruslan Sakevych. All rights reserved.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int a;
    int b;
    scanf("%d %d", &a, &b);
    if (a < b) {
        printf("<");
    } else if (a > b) {
        printf(">");
    } else {
        printf("=");
    }
    return 0;
}