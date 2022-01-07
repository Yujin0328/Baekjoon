#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int number = 0, score = 0, sum = 0;

	for (int i = 0; i < 5; i++) {
		sum = 0;
		for (int j = 0; j < 4; j++) {
			int input;
			cin >> input;
			sum += input;
		}
		if (score < sum) {
			score = sum;
			number = i + 1;
		}
	}
	cout << number << " " << score;
}