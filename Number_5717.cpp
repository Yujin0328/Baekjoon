#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	vector<int> vector;

	while (true) {
		int male, female;
		cin >> male >> female;

		if (male == 0 && female == 0)
			break;
		else
			vector.push_back(male + female);
	}

	for (int i = 0; i < vector.size(); i++) {
		cout << vector[i] << "\n";
	}
}