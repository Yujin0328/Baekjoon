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
		int input[10] = { 0,0,0,0,0,0,0,0,0,0 };
		for (int j = 0; j < 10; j++) {
			int n;
			cin >> n;
			input[j] = n;
		}
		sort(input, input + 10);
		result[i] = input[7];
	}

	for (int i = 0; i < number; i++) {
		cout << result[i] << "\n";
	}
}