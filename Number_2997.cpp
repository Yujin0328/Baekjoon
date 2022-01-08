#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int arr[3];
	for (int i = 0; i < 3; i++) {
		int input;
		cin >> input;
		arr[i] = input;
	}

	sort(arr, arr + 3);

	if (arr[1] - arr[0] < arr[2] - arr[1])
		cout << arr[1] + (arr[1] - arr[0]);
	else if (arr[1] - arr[0] > arr[2] - arr[1])
		cout << arr[0] + (arr[2] - arr[1]);
	else
		cout << arr[2] + (arr[1] - arr[0]);



}