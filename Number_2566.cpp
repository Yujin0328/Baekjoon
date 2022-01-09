#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	int row = 0, col = 0, max = 0;

	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			int input;
			cin >> input;
			if (input > max) {
				max = input;
				row = i;
				col = j;
			}
		}
	}

	cout << max << "\n" << row << " " << col;
}