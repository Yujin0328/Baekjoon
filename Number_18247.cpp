#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
using namespace std;


int main() {
	int test;
	cin >> test;
	int* result = new int[test];

	for (int i = 0; i < test; i++) {
		int row, col;
		cin >> row >> col;

		if (row < 12 || col < 4)
			result[i] = -1;
		else {
			result[i] = col * 11 + 4;
		}
	}

	for (int i = 0; i < test; i++) {
		cout << result[i] << "\n";
	}
}