#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int contest, sum = 0;
	cin >> contest;

	for (int i = 0; i < contest; i++) {
		int input;
		cin >> input;
		sum += input;
	}

	if (sum % 3 == 0) {
		cout << "yes";
	}
	else
		cout << "no";
}