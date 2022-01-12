#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	vector<int> vector;

	while (true) {
		string input;
		cin >> input;
		if (input == "#") break;
		int yes = 0, no = 0, present = input.length() / 2, absent = 0;
		if (input.length() % 2 > 0)
			present++;

		for (int i = 0; i < input.length(); i++) {
			if (input[i] == 'Y')
				yes++;
			else if (input[i] == 'N')
				no++;
			else if (input[i] == 'A')
				absent++;
		}

		if (present <= absent)
			vector.push_back(0);
		else {
			if (yes > no)
				vector.push_back(1);
			else if (yes < no)
				vector.push_back(2);
			else
				vector.push_back(3);
		}
	}

	for (int i = 0; i < vector.size(); i++) {
		if (vector[i] == 0)
			cout << "need quorum\n";
		else if (vector[i] == 1)
			cout << "yes\n";
		else if (vector[i] == 2)
			cout << "no\n";
		else if (vector[i] == 3)
			cout << "tie\n";
	}
}