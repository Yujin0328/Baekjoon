#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	int number;
	cin >> number;

	int* result = new int[number];

	for (int i = 0; i < number; i++) {
		int input[5] = { 0,0,0,0,0 };
		for (int j = 0; j < 5; j++) {
			int n;
			cin >> n;
			input[j] = n;
		}
		sort(input, input + 5);
		if (input[3] - input[1] >= 4)
			result[i] = -1;
		else
			result[i] = input[1] + input[2] + input[3];
	}

	for (int i = 0; i < number; i++) {
		if (result[i] == -1)
			cout << "KIN\n";
		else
			cout << result[i] << "\n";
	}
}