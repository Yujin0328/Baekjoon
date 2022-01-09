#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	vector<int> vector;

	while (true) {
		string input, change;
		cin >> input;
		if (input == "0") break;

		change = input;
		reverse(input.begin(), input.end());

		if (input == change)
			vector.push_back(1);
		else
			vector.push_back(0);
	}

	for (int i = 0; i < vector.size(); i++) {
		if (vector[i] == 1)
			cout << "yes\n";
		else
			cout << "no\n";
	}
}