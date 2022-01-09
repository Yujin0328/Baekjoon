#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int number, count2 = 0, counte = 0;
	cin >> number;

	string input;
	cin >> input;

	for (int i = 0; i < input.size(); i++) {
		if (input[i] == '2')
			count2++;
		else if (input[i] == 'e')
			counte++;
	}

	if (count2 > counte)
		cout << 2;
	else if (count2 == counte)
		cout << "yee";
	else
		cout << "e";
}