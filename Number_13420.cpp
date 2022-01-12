#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	int test;
	cin >> test;
	int* result = new int[test];

	for (int i = 0; i < test; i++) {
		long long x, y, answer;
		char op, eq;
		cin >> x >> op >> y >> eq >> answer;

		if (op == '+') {
			if (x + y == answer)
				result[i] = 1;
			else
				result[i] = 0;
		}
		else if (op == '-') {
			if (x - y == answer)
				result[i] = 1;
			else
				result[i] = 0;
		}
		else if (op == '*') {
			if (x * y == answer)
				result[i] = 1;
			else
				result[i] = 0;
		}
		else if (op == '/') {
			if (x / y == answer)
				result[i] = 1;
			else
				result[i] = 0;
		}
	}

	for (int i = 0; i < test; i++) {
		if (result[i] == 1)
			cout << "correct\n";
		else
			cout << "wrong answer\n";
	}
}