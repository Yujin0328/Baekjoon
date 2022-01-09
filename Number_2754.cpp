#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;


int main() {
	double result = 0;
	char score, plus;
	cin >> score;

	if (score != 'F')
		cin >> plus;
	else
		plus = '0';

	if (score == 'A')
		result = 4;
	else if (score == 'B')
		result = 3;
	else if (score == 'C')
		result = 2;
	else if (score == 'D')
		result = 1;
	else if (score == 'F')
		result = 0.0;

	if (plus == '+')
		result += 0.3;
	else if (plus == '-')
		result -= 0.3;

	printf("%.1f", result);
}