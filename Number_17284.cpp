#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
	string input;
	getline(cin, input);
	int money = 5000;

	for (int i = 0; i < input.length(); i++) {
		if (input[i] == '1')
			money -= 500;
		else if (input[i] == '2')
			money -= 800;
		else if (input[i] == '3')
			money -= 1000;
	}

	cout << money;
}