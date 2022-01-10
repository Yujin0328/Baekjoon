#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
	int n, max = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		if (input > max)
			max = input;
	}

	cout << max;
}