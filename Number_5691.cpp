#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	vector<int> vector;
	while (true) {
		int a, b, max, min;
		cin >> a >> b;
		if (a == 0 && b == 0)
			break;

		if (a > b) {
			max = a;
			min = b;
		}
		else {
			max = b;
			min = a;
		}

		vector.push_back(min - (max - min));
	}

	for (int i = 0; i < vector.size(); i++) {
		cout << vector[i] << "\n";
	}

}