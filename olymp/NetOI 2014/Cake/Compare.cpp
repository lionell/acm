//#include <iostream>
//#include <ctime>
//
//using namespace std;
//
//struct Point {
//	int x;
//	int y;
//};
//
//Point points[2000];
//
//long long Delta(int f, int s, int p) {
//	return abs((points[p].x - points[f].x) * (points[f].y - points[s].y) - (points[p].y - points[f].y) * (points[f].x - points[s].x));
//}
//
//double Square(int f, int s, int t) {
//	Point a = { points[s].x - points[f].x, points[s].y - points[f].y };
//	Point b = { points[t].x - points[f].x, points[t].y - points[f].y };
//	double result = double(abs(a.x * b.y - b.x * a.y)) / 2.0;
//	return result;
//}
//
//int main() {
//	srand(unsigned int(time(NULL)));
//	int n = 0;
//	cin >> n;
//	for (int i = 0; i < n; ++i) {
//		cin >> points[i].x >> points[i].y;
//	}
//	unsigned int startTime = clock();
//	double square1 = 0.0;
//	for (int i = 0; i < n; ++i) {
//		for (int j = i + 1; j < n; ++j) {
//			int l = j + 1;
//			int r = n - 1;
//			while (r - l > 1) {
//				int m = (r + l) / 2;
//				if (Delta(i, j, m + 1) > Delta(i, j, m)) l = m;
//				else r = m;
//			}
//			double tempSquare = Square(i, j, r);
//			if (tempSquare > square1) square1 = tempSquare;
//		}
//	}
//	unsigned int endTime = clock();
//	cout << "BinSearch time: " << endTime - startTime << "ms" << endl;
//	startTime = clock();
//	double square2 = 0.0;
//	for (int i = 0; i < n; ++i) {
//		for (int j = i + 1; j < n; ++j) {
//			int required = 0;
//			for (int k = j + 1; k < n; k++) {
//				if (Delta(i, j, required) < Delta(i, j, k)) required = k;
//			}
//			double tempSquare = Square(i, j, required);
//			if (tempSquare > square2) square2 = tempSquare;
//		}
//	}
//	endTime = clock();
//	cout << "Counting time: " << endTime - startTime << "ms" << endl;
//	cout << fixed << square1 << ' ' << fixed << square2 << endl;
//	return 0;
//}