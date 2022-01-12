#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int test;
	cin >> test;

	for (int i = 0; i < test; i++) {
		int x1, y1, f1, x2, y2, f2;
		cin >> x1 >> y1 >> f1
			>> x2 >> y2 >> f2;

		int result = f1 + f2 + abs(x1 - x2) + abs(y1 - y2);
		cout << result << "\n";
	}
}