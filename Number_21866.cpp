#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int maxscore[9] = { 100, 100, 200, 200, 300, 300, 400, 400, 500 };
	int sum = 0, hacker = 0;

	for (int i = 0; i < 9; i++) {
		int input;
		cin >> input;
		sum += input;
		if (input > maxscore[i]) {
			hacker = 1;
			break;
		}
	}

	if (sum < 100)
		cout << "none";
	else {
		if (hacker == 1)
			cout << "hacker";
		else
			cout << "draw";
	}
}