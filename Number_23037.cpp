#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	int input, result = 0;
	cin >> input;

	for (int i = 0; i < 5; i++) {
		result += pow(input % 10, 5.0);
		input /= 10;
	}

	cout << result;
}