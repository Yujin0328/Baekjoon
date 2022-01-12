#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
	int test;
	cin >> test;
	cin.ignore();

	for (int i = 0; i < test; i++) {
		string name;
		getline(cin, name);
		int countg = 0, countb = 0;

		for (int j = 0; j < name.length(); j++) {
			if (name[j] == 'g' || name[j] == 'G')
				countg++;
			if (name[j] == 'b' || name[j] == 'B')
				countb++;
		}

		cout << name << " is ";
		if (countg > countb)
			cout << "GOOD\n";
		else if (countg == countb)
			cout << "NEUTRAL\n";
		else if (countg < countb)
			cout << "A BADDY\n";

	}


}