#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int number, x;
	cin >> number >> x;
	vector<int> vector;

	for (int i = 0; i < number; i++) {
		int input;
		cin >> input;
		if (input < x) {
			vector.push_back(input);
		}
	}

	for (int i = 0; i < vector.size(); i++) {
		cout << vector[i] << " ";
	}
}