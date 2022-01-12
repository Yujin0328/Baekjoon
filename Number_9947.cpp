#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int change(string input) {
	if (input == "January") return 1;
	else if (input == "February") return 2;
	else if (input == "March") return 3;
	else if (input == "April") return 4;
	else if (input == "May") return 5;
	else if (input == "June") return 6;
	else if (input == "July") return 7;
	else if (input == "August") return 8;
	else if (input == "September") return 9;
	else if (input == "October") return 10;
	else if (input == "November") return 11;
	else if (input == "December") return 12;
}

int main() {

	while (true) {
		string firstname, secondname;
		int firstscore = 0, secondscore = 0, turn = 0;
		cin >> firstname >> secondname;
		if (firstname == "#" && secondname == "#") break;

		cin >> turn;
		for (int i = 0; i < turn; i++) {
			string first, second;
			cin >> first >> second;
			if (first == second)
				firstscore++;
			else
				secondscore++;
		}

		cout << firstname << " " << firstscore << " "
			<< secondname << " " << secondscore << "\n";
	}
}