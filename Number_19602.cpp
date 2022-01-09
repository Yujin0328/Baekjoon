#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int score = 0;

	for (int i = 1; i <= 3; i++) {
		int input;
		cin >> input;
		score += input * i;
	}

	if (score < 10)
		cout << "sad";
	else
		cout << "happy";
}