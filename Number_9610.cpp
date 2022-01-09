#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	int test, arr[5] = { 0,0,0,0,0 };
	cin >> test;

	for (int i = 0; i < test; i++) {
		int x, y;
		cin >> x >> y;
		if (x == 0 || y == 0)
			arr[0]++;
		else if (x > 0 && y > 0)
			arr[1]++;
		else if (x < 0 && y > 0)
			arr[2]++;
		else if (x < 0 && y < 0)
			arr[3]++;
		else if (x > 0 && y < 0)
			arr[4]++;
	}

	for (int i = 1; i < 5; i++) {
		cout << "Q" << i << ": " << arr[i] << "\n";
	}
	cout << "AXIS: " << arr[0];
}