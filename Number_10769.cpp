#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	int count = 0, none = 1;

	string input;
	getline(cin, input);

	for (int i = 0; i < input.length() - 2; i++) {
		if (input[i] == ':' && input[i + 1] == '-') {
			if (input[i + 2] == '(') {
				count--;
				none = 0;
			}
			else if (input[i + 2] == ')') {
				count++;
				none = 0;
			}
		}
	}

	if (none == 1)
		cout << "none";
	else {
		if (count == 0)
			cout << "unsure";
		else if (count > 0)
			cout << "happy";
		else
			cout << "sad";
	}
}