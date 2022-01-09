#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
using namespace std;


int main() {
	string password;
	int alph = 0, ALPH = 0, num = 0, special = 0, length = 0, sum = 0;

	cin >> length >> password;

	for (int i = 0; i < length; i++) {
		int temp = (int)password[i];

		if (temp >= 48 && temp <= 57)
			num++;
		else if (temp >= 65 && temp <= 90)
			ALPH++;
		else if (temp >= 97 && temp <= 122)
			alph++;
		else
			special++;
	}

	if (special == 0)
		sum++;
	if (num == 0)
		sum++;
	if (ALPH == 0)
		sum++;
	if (alph == 0)
		sum++;

	if (sum + length < 6)
		sum += 6 - (sum + length);

	cout << sum;
}