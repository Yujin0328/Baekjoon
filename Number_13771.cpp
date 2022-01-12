#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	int test;
	cin >> test;
	double* money = new double[test];

	for (int i = 0; i < test; i++) {
		double input;
		cin >> input;
		money[i] = input;
	}

	sort(money, money + test);

	printf("%.2f", money[1]);
}