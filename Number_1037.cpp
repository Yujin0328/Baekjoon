#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;

		arr[i] = input;
	}

	sort(arr, arr + n);

	cout << arr[0] * arr[n - 1];
}