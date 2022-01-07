#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	double first, second;
	vector<int> vector;

	while (true) {
		cin >> first >> second;

		if (first == 0 && second == 0)
			break;
		else {
			if (first > second)
				vector.push_back(1);
			else
				vector.push_back(0);
		}
	}

	for (int i = 0; i < vector.size(); i++) {
		if (vector[i] == 1)
			cout << "Yes";
		else
			cout << "No";
		cout << "\n";
	}
}