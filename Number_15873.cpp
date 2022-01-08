#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int input;
	cin >> input;

	if (input > 1000)
		cout << 20;
	else if (input > 100) {
		if (input % 10 == 0)
			cout << input / 100 + input % 100;
		else
			cout << 10 + input % 10;
	}
	else
		cout << input / 10 + input % 10;
}