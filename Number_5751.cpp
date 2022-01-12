#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	while (true) {
		int test, mary = 0, john = 0;
		cin >> test;
		if (test == 0) break;

		for (int i = 0; i < test; i++) {
			int input;
			cin >> input;
			if (input == 0)
				mary++;
			else
				john++;
		}
		cout << "Mary won " << mary << " times and John won " << john << " times\n";
	}
}