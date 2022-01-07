#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int score[8];
	int temp[8];
	int sum = 0;
	for (int i = 0; i < 8; i++) {
		int input;
		cin >> input;
		score[i] = input;
		temp[i] = input;
	}

	sort(temp, temp + 8);

	for (int i = 3; i < 8; i++)
		sum += temp[i];

	cout << sum << "\n";
	for (int i = 0; i < 8; i++) {
		for (int j = 3; j < 8; j++) {
			if (score[i] == temp[j])
				cout << i + 1 << " ";
		}
	}
}