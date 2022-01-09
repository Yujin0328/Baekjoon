#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int test = 0;
	string number;
	cin >> number;

	for (int i = 0; i < 3; i++) {
		if (number[i] != '5')
			test = 1;
	}

	if (test == 1)
		cout << "NO";
	else
		cout << "YES";
}