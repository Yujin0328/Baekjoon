#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	vector<int> vector;

	while (true) {
		int sum = 2, input, count = -1;
		cin >> input;
		if (input == 0) break;

		while (input > 0) {
			int one = input % 10;
			count++;
			if (one == 1) sum += 2;
			else if (one == 0) sum += 4;
			else sum += 3;

			input /= 10;
		}
		sum += count;
		vector.push_back(sum);
	}

	for (int i = 0; i < vector.size(); i++) {
		cout << vector[i] << "\n";
	}
}