#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	int number, count = 0, sum = 0;
	cin >> number;

	int* arr = new int[number];
	for (int i = 0; i < number; i++)
		arr[i] = 0;

	for (int i = 0; i < number; i++) {
		int input;
		cin >> input;

		if (input == 0) {
			arr[--count] = 0;
		}
		else {
			arr[count] = input;
			count++;
		}
	}

	for (int i = 0; i < number; i++)
		sum += arr[i];

	cout << sum;
}