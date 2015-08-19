#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#define cin in
ifstream in("/home/lionell/Developing/acm/codeforces/VK_Cup_2015/round_1/in.txt");
#endif

map<int, int> id_to_num;
int num_to_id[250];
vector<int> answer_order;
int friends[250][250];
int friend_number[250];

void add(int x, int &next_num) {
    if (id_to_num[x] == 0) {
        id_to_num[x] = next_num;
        num_to_id[next_num] = x;
        answer_order.push_back(x);
        next_num++;
    }
}

int main() {
    int m = 0, k = 0;
    cin >> m >> k;
    int next_num = 1;
    for (int i = 0; i < m; ++i) {
        int a = 0, b = 0;
        cin >> a >> b;
        add(a, next_num);
        add(b, next_num);
        friends[id_to_num[a]][id_to_num[b]] = 1;
        friends[id_to_num[b]][id_to_num[a]] = 1;
        friend_number[id_to_num[a]]++;
        friend_number[id_to_num[b]]++;
    }
    sort(answer_order.begin(), answer_order.end());
    for (int i = 0; i < answer_order.size(); ++i) {
        cout << answer_order[i] << ": ";
        int my_num = id_to_num[answer_order[i]];
        vector<int> my_friends;
        int friends_need = (friend_number[my_num]) * k / 100;
        if (((friend_number[my_num]) * k) % 100 > 0) friends_need++;
        for (int j = 1; j < next_num; ++j) {
            if (j != my_num && friends[j][my_num] == 0) {
                int same = 0;
                for (int t = 1; t < next_num; ++t) {
                    if (friends[my_num][t] == 1 && friends[j][t] == 1) same++;
                }
                if (same >= friends_need) my_friends.push_back(num_to_id[j]);
            }
        }
        sort(my_friends.begin(), my_friends.end());
        cout << my_friends.size() << ' ';
        for (int j = 0; j < my_friends.size(); ++j) {
            cout << my_friends[j] << ' ';
        }
        cout << endl;
    }
    return 0;
}