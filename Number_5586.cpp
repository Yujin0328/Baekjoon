#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string input;
	int joi = 0, ioi = 0;
	cin >> input;

	for (int i = 0; i <= input.length() - 3; i++) {
		if (input[i + 1] == 'O' && input[i + 2] == 'I') {
			if (input[i] == 'J')
				joi++;
			else if (input[i] == 'I')
				ioi++;
		}
	}

	cout << joi << "\n" << ioi;
}