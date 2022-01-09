#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	vector<string> name;
	vector<char> check;

	while (true) {
		string input;
		int age, weight;
		cin >> input >> age >> weight;

		if (input == "#" && age == 0 && weight == 0) break;

		name.push_back(input);
		if (age > 17 || weight >= 80)
			check.push_back('S');
		else
			check.push_back('J');
	}

	for (int i = 0; i < name.size(); i++) {
		cout << name[i] << " ";
		if (check[i] == 'S')
			cout << "Senior\n";
		else
			cout << "Junior\n";
	}
}