#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int input, count = 0;
	cin >> input;

	while (true) {
		if (input == 1) {
			count++;
			break;
		}
		else if (input % 2 == 0) {
			input = input / 2;
			count++;
		}
		else {
			input = input * 3 + 1;
			count++;
		}
	}
	cout << count;
}