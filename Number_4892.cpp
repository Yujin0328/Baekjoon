#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

void answer(int n) {
	n = 3 * n;

	if (n % 2 == 0) {
		cout << "even ";
		n = n / 2;
	}
	else {
		cout << "odd ";
		n = (n + 1) / 2;
	}
	n = 3 * n;
	n = n / 9;
	cout << n << "\n";
}


int main() {
	int count = 0;
	vector<int> vector;

	while (true) {
		int input;
		cin >> input;
		if (input == 0) break;

		vector.push_back(input);
		count++;
	}

	for (int i = 0; i < vector.size(); i++) {
		cout << i + 1 << ". ";
		answer(vector[i]);
	}
}