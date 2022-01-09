#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;


int main() {
	int input;
	cin >> input;

	for (int i = 1; i <= input; i++) {
		if (i % 2 == 0)
			cout << " ";
		for (int j = 1; j <= input; j++) {
			cout << "* ";
		}
		cout << "\n";
	}
}