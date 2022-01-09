#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int test;
	cin >> test;
	double* arr = new double[test];

	for (int i = 0; i < test; i++) {
		double input = 0;
		string op;

		cin >> input;
		getline(cin, op);

		for (int j = 0; j < op.length(); j++) {
			if (op[j] == '@')
				input *= 3;
			else if (op[j] == '%')
				input += 5;
			else if (op[j] == '#')
				input -= 7;
		}
		arr[i] = input;
	}

	for (int i = 0; i < test; i++) {
		printf("%.2f\n", arr[i]);
	}
}