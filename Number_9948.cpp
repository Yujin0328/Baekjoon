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
		int day, month;
		string inputmonth;
		cin >> day >> inputmonth;
		if (day == 0 && inputmonth == "#") break;

		month = change(inputmonth);

		if (month < 8) {
			if (month == 2 && day == 29)
				cout << "Unlucky\n";
			else
				cout << "Yes\n";
		}
		else if (month > 8)
			cout << "No\n";
		else {
			if (day < 4)
				cout << "Yes\n";
			else if (day == 4)
				cout << "Happy birthday\n";
			else
				cout << "No\n";
		}
	}
}