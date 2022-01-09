#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;


int main() {
	int sum = 0;
	char temp;
	do {
		int input;
		cin >> input;
		sum += input;
	} while (getc(stdin) == ' ');

	cout << sum;
}