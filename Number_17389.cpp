#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
	int test, bonus = 0, score = 0;
	cin >> test;
	string input;
	cin >> input;

	for (int i = 0; i < input.length(); i++) {
		if (i == 0) {
			if (input[i] == 'O') {
				bonus++;
				score += i + 1;
			}
		}
		else {
			if (input[i] == 'O') {
				score += bonus++;
				score += i + 1;
			}
			else {
				bonus = 0;
			}
		}
	}

	cout << score;
}