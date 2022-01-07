#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main() {
	int case_number;
	cin >> case_number;

	int* even_sum = new int[case_number];
	int* even_min = new int[case_number];

	for (int i = 0; i < case_number; i++) {
		int sum = 0, min = 100;
		for (int j = 0; j < 7; j++) {
			int input;
			cin >> input;
			if (input % 2 == 0) {
				sum += input;
				if (min > input)
					min = input;
			}
		}
		even_sum[i] = sum;
		even_min[i] = min;
	}

	for (int i = 0; i < case_number; i++) {
		cout << even_sum[i] << " " << even_min[i] << "\n";
	}

}