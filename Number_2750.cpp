#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int arr[5], sum = 0;

	for (int i = 0; i < 5; i++) {
		int input;
		cin >> input;
		arr[i] = input;
		sum += input;
	}

	sort(arr, arr + 5);

	cout << sum / 5 << "\n" << arr[2];
}