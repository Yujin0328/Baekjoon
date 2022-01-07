#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int test_number;
	cin >> test_number;
	int* arr = new int[test_number];

	for (int i = 0; i < test_number; i++) {
		int num, sum = 0;
		cin >> num;
		for (int j = 0; j < num; j++) {
			int input;
			cin >> input;
			sum += input;
		}
		arr[i] = sum;
	}

	for (int i = 0; i < test_number; i++) {
		cout << arr[i] << "\n";
	}
}