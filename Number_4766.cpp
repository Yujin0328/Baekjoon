#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	vector<double> vector;

	double first;
	cin >> first;

	while (true) {
		double second;
		cin >> second;
		if (second == 999) break;
		vector.push_back(second - first);
		first = second;
	}

	for (int i = 0; i < vector.size(); i++) {
		printf("%.2f\n", vector[i]);
	}
}