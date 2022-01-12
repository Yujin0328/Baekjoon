#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	string input, original, find;
	cin >> input >> find;
	for (int i = 0; i < input.length(); i++) {
		if ((int)input[i] >= 48 && (int)input[i] <= 57)
			continue;
		else
			original += input[i];
	}

	if (original.find(find) != string::npos)
		cout << 1;
	else
		cout << 0;
}