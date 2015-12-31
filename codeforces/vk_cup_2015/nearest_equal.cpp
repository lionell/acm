#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#define cin in
#endif

const int INF = 1000000000;
class Heap {
private:
    int* a;
    int a_size;
    void heapify(int i) {
        int left = 2 * i;
        int right = 2 * i + 1;
        int largest = i;
        if (left <= a_size && a[left] > a[i]) {
            largest = left;
        }
        if (right <= a_size && a[right] > a[largest]) {
            largest = right;
        }
        if (largest != i) {
            swap(a[i], a[largest]);
            heapify(largest);
        }
    }
public:
    Heap(int max_size = 100000) {
        a = new int[max_size];
        a_size = 0;
    }
    ~Heap() {
        delete[] a;
    }
    void heap_increase_key(int i, int key) {
        a[i] = key;
        while (i > 1 && a[i / 2] < a[i]) {
            swap(a[i], a[i / 2]);
            i = i / 2;
        }
    }
    void heap_insert(int key) {
        a_size += 1;
        a[a_size] = -INF;
        heap_increase_key(a_size, key);
    }
    int heap_extract_max() {
        int result = a[1];
        a[1] = a[a_size];
        a_size -= 1;
        heapify(1);
        return result;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    ifstream in("/home/lionell/Developing/acm/codeforces/VK_Cup_2015/in.txt");
    return 0;
}