#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;


int main() {
	int num, count = 0;
	cin >> num;

	for (int i = 0; i < 5; i++) {
		int input;
		cin >> input;
		if (num == input)
			count++;
	}

	cout << count;
}