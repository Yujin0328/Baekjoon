#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		double input;
		cin >> input;
		sum += pow(input, 2);
	}
	cout << sum % 10;
}