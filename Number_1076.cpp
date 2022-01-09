#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

long long result = 0;

void change(string color) {
	result *= 10;
	if (color == "black") result += 0;
	else if (color == "brown") result += 1;
	else if (color == "red") result += 2;
	else if (color == "orange") result += 3;
	else if (color == "yellow") result += 4;
	else if (color == "green") result += 5;
	else if (color == "blue") result += 6;
	else if (color == "violet") result += 7;
	else if (color == "grey") result += 8;
	else if (color == "white") result += 9;
}

void mul(string color) {
	if (color == "black") result *= 1;
	else if (color == "brown") result *= 10;
	else if (color == "red") result *= 100;
	else if (color == "orange") result *= 1000;
	else if (color == "yellow") result *= 10000;
	else if (color == "green") result *= 100000;
	else if (color == "blue") result *= 1000000;
	else if (color == "violet") result *= 10000000;
	else if (color == "grey") result *= 100000000;
	else if (color == "white") result *= 1000000000;
}

int main() {
	string first, second, third, output;
	cin >> first >> second >> third;

	change(first);
	change(second);
	mul(third);

	cout << result;
}