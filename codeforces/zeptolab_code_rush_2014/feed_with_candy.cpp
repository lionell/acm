//
// Created by lionell on 3/29/15.
//

#include <bits/stdc++.h>

struct Tuple {
    int t;
    int h;
    int m;
};

bool comparator(const Tuple &a, const Tuple &b) {
    return (a.h < b.h);
}

int evaluate(Tuple* candies, int n, int start_index, int max_height, int type, int current_depth) {
    int result = current_depth;
    for (int i = start_index; i < n; ++i) {
        if (candies[i].h > max_height) break;
        else if (candies[i].t == type) result = std::max(result, evaluate(candies, n, i + 1, max_height + candies[i].m, 1 - type, current_depth + 1));
    }
    return result;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("/home/lionell/Developing/acm/codeforces/zeptolab_code_rush_2014/in.txt", "r", stdin);
#endif

    int n = 0, x = 0;
    scanf("%d%d", &n, &x);
    Tuple *candies = new Tuple[n]();
    for (int i = 0; i < n; ++i) {
        scanf("%d%d%d", &candies[i].t, &candies[i].h, &candies[i].m);
    }

    std::sort(candies, candies + n, comparator);

    int first = evaluate(candies, n, 0, x, 0, 0);;
    int second = evaluate(candies, n, 0, x, 1, 0);;
    int answer = std::max(first, second);

    printf("%d", answer);

#ifndef ONLINE_JUDGE
    fclose(stdin);
#endif
    return 0;
}