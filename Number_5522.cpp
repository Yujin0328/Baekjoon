#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		int input;
		cin >> input;
		sum += input;
	}

	cout << sum;
}