#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int count = 0;

	for (int i = 1; i <= 8; i++) {
		string input;
		cin >> input;
		if (i % 2 == 1) {
			if (input[0] == 'F') count++;
			if (input[2] == 'F') count++;
			if (input[4] == 'F') count++;
			if (input[6] == 'F') count++;
		}
		else {
			if (input[1] == 'F') count++;
			if (input[3] == 'F') count++;
			if (input[5] == 'F') count++;
			if (input[7] == 'F') count++;
		}
	}

	cout << count;
}