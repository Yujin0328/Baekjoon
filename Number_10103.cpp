#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
	int first = 100, second = 100;

	int round;
	cin >> round;

	for (int i = 0; i < round; i++) {
		int firstnumber, secondnumber;
		cin >> firstnumber >> secondnumber;
		if (firstnumber > secondnumber)
			second -= firstnumber;
		else if (firstnumber < secondnumber)
			first -= secondnumber;
	}

	cout << first << "\n" << second;
}