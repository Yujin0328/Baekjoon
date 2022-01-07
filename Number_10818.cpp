#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int number;
	cin >> number;
	int* arr = new int[number];

	for (int i = 0; i < number; i++) {
		int input;
		cin >> input;
		arr[i] = input;
	}

	sort(arr, arr + number);

	cout << arr[0] << " " << arr[number - 1];
}