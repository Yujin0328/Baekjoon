#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;


int main() {
	string input;
	cin >> input;
	int time = 0;

	for (int i = 0; i < input.size(); i++) {
		int num = (int)input[i];
		if (num >= 65 && num <= 67)
			time += 3;
		else if (num >= 68 && num <= 70)
			time += 4;
		else if (num >= 71 && num <= 73)
			time += 5;
		else if (num >= 74 && num <= 76)
			time += 6;
		else if (num >= 77 && num <= 79)
			time += 7;
		else if (num >= 80 && num <= 83)
			time += 8;
		else if (num >= 84 && num <= 86)
			time += 9;
		else if (num >= 87 && num <= 90)
			time += 10;
	}
	cout << time;

}