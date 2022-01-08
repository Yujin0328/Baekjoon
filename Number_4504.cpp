#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n;
	vector<int> vector;

	cin >> n;

	while (true) {
		int input;
		cin >> input;
		if (input == 0) break;
		vector.push_back(input);
	}

	for (int i = 0; i < vector.size(); i++) {
		cout << vector[i];
		if (vector[i] % n == 0)
			cout << " is a multiple of " << n << ".\n";
		else
			cout << " is NOT a multiple of " << n << ".\n";
	}
}