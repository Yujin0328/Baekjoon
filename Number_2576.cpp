#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int min = 100, sum = 0;;
	for (int i = 0; i < 7; i++) {
		int input;
		cin >> input;
		if (input % 2 != 0) {
			if (min > input)
				min = input;
			sum += input;
		}
	}

	if (min == 100)
		cout << "-1";
	else
		cout << sum << "\n" << min;
}