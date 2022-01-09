#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	vector<int> vector;

	while (true) {
		int a, b, c;
		cin >> a >> b >> c;

		if (a == 0 && b == 0 && c == 0) break;
		else if ((a + b) > c && (a + c) > b && (b + c) > a) {
			if (a == b && b == c)
				vector.push_back(3);
			else if (a != b && b != c && a != c)
				vector.push_back(1);
			else
				vector.push_back(2);
		}
		else
			vector.push_back(0);

	}

	for (int i = 0; i < vector.size(); i++) {
		if (vector[i] == 0) cout << "Invalid\n";
		else if (vector[i] == 1) cout << "Scalene\n";
		else if (vector[i] == 2) cout << "Isosceles\n";
		else if (vector[i] == 3) cout << "Equilateral\n";
	}
}