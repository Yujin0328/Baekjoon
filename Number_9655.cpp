#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int input;
	cin >> input;

	if (input % 2 == 1)
		cout << "SK";
	else
		cout << "CY";
}