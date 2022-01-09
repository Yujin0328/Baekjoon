#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
using namespace std;


int main() {
	vector<string> vector;

	while (true) {
		string input;
		getline(cin, input);

		if (input.compare("***") == 0) break;

		reverse(input.begin(), input.end());
		vector.push_back(input);
	}

	for (int i = 0; i < vector.size(); i++) {
		cout << vector[i] << "\n";
	}
}