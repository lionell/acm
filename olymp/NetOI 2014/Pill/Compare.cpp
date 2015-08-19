//#include <iostream>
//#include <ctime>
//
//using namespace std;
//
//const int Inf = 2000000000;
//
//int t[100000];
//int n = 0;
//
//long long Eval(int x) {
//	long long result = 0;
//	for (int i = 0; i < n; ++i) {
//		result += abs(t[i] - x);
//	}
//	return result;
//}
//
//long long BinSearch(int l, int r) {
//	while (r - l > 1) {
//		int m = (r + l) / 2;
//		if (Eval(m + 1) < Eval(m)) l = m;
//		else r = m;
//	}
//	long long result = Eval(r);
//	return result;
//}
//
//int main() {
//	srand(unsigned int(time(NULL)));
//	unsigned int maxTime = 0;
//	for (int j = 0; j < 10000; ++j) {
//		n = rand() % 100000 + 1;
//		int min = Inf;
//		int max = -Inf;
//		for (int i = 0; i < n; ++i) {
//			t[i] = rand() % 1000000000 + 1;
//			if (t[i] < min) min = t[i];
//			if (t[i] > max) max = t[i];
//		}
//		//unsigned int startTime = clock();
//		//int answer1 = Inf;
//		//for (int k = min; k <= max; ++k) {
//		//	int sum = 0;
//		//	for (int i = 0; i < n; ++i) sum += abs(t[i] - k);
//		//	if (sum < answer1) answer1 = sum;
//		//}
//		//unsigned int endTime = clock();
//		//cout << "Counting time: " << endTime - startTime << "ms" << endl;
//		unsigned int startTime = clock();
//		long long answer2 = BinSearch(min, max);
//		unsigned int endTime = clock();
//		if (endTime - startTime > maxTime) maxTime = endTime - startTime;
//		//cout << "BinSearch time: " << endTime - startTime << "ms" << endl;
//	}
//	cout << maxTime;
//	return 0;
//}