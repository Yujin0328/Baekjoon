#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string input;
	int left = 0, right = 0;
	cin >> input;

	int length = input.length() / 2 - 1;
	for (int i = 0; i <= length; i++) {
		left += (int)input[i];
	}
	for (int i = length + 1; i < input.length(); i++) {
		right += (int)input[i];
	}

	if (left == right)
		cout << "LUCKY";
	else
		cout << "READY";
}