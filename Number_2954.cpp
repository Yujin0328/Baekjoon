#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	string input, result;
	getline(cin, input);

	for (int i = 0; i < input.length(); i++) {
		if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i'
			|| input[i] == 'o' || input[i] == 'u') {
			result += input[i];
			i += 2;
		}
		else {
			result += input[i];
		}
	}

	cout << result;
}