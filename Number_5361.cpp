#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int number;
	cin >> number;

	double* money = new double[number];

	for (int i = 0; i < number; i++) {
		int a, b, c, d, e;
		cin >> a >> b >> c >> d >> e;
		money[i] = a * 350.34 + b * 230.90 + c * 190.55 + d * 125.30 + e * 180.90;
	}

	for (int i = 0; i < number; i++) {
		printf("$%.2f\n", money[i]);
	}
}