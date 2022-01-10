#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	string input;
	int count2 = 0, count0 = 0, count1 = 0, count8 = 0, check = 1;
	cin >> input;

	for (int i = 0; i < input.length(); i++) {
		if (input[i] == '2' || input[i] == '0' || input[i] == '1' || input[i] == '8') {
			if (input[i] == '2') count2++;
			else if (input[i] == '0') count0++;
			else if (input[i] == '1') count1++;
			else if (input[i] == '8') count8++;
		}
		else {
			check = -1;
			break;
		}
	}

	if (check == -1)
		cout << 0;
	else if (count2 != 0 && count0 != 0 && count1 != 0 && count8 != 0) {
		if (count2 == count0 && count0 == count1 && count1 == count8)
			cout << 8;
		else
			cout << 2;
	}
	else
		cout << 1;
}