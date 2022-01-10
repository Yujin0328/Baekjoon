#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int test;
	cin >> test;

	int* result = new int[test];

	for (int i = 0; i < test; i++) {
		string input;
		cin >> input;
		if (input[1] == '=')
			result[i] = -1;

		else {
			int index = 0;
			string left, right;
			while (input[index] != '+') {
				left += input[index];
				index++;
			}
			for (int i = index + 1; i < input.length(); i++) {
				right += input[i];
			}

			result[i] = stoi(left) + stoi(right);
		}
	}

	for (int i = 0; i < test; i++) {
		if (result[i] == -1)
			cout << "skipped\n";
		else
			cout << result[i] << "\n";
	}
}