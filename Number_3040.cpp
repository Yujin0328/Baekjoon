#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
	int sum = 0, fake1 = 0, fake2 = 0;
	int num[9];
	for (int i = 0; i < 9; i++) {
		int input;
		cin >> input;
		num[i] = input;
		sum += input;
	}

	sum -= 100;

	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (num[i] + num[j] == sum) {
				fake1 = i;
				fake2 = j;
				break;
			}
		}
	}

	for (int i = 0; i < 9; i++) {
		if (i != fake1 && i != fake2)
			cout << num[i] << "\n";
	}
}