#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;


int main() {
	string result, input;
	cin >> input;

	result += input[0];

	for (int i = 1; i < input.size(); i++) {
		if ((int)input[i] >= 65 && (int)input[i] <= 90)
			result += input[i];
	}

	cout << result;
}