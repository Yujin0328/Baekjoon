#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int test;
	cin >> test;
	int* arr_sum = new int[test];
	int* arr_min = new int[test];

	for (int i = 0; i < test; i++) {
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
		arr_sum[i] = sum;
		arr_min[i] = min;
	}

	for (int i = 0; i < test; i++) {
		cout << arr_sum[i] << " " << arr_min[i] << "\n";
	}
}