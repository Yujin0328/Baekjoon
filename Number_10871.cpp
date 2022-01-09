#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


int main() {
	int num, x;
	cin >> num >> x;

	vector<int> vector;

	for (int i = 0; i < num; i++) {
		int input;
		cin >> input;

		if (x > input)
			vector.push_back(input);
	}

	for (int i = 0; i < vector.size(); i++)
		cout << vector[i] << " ";
}