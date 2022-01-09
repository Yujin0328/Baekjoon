#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int arr[3], money = 0;

	for (int i = 0; i < 3; i++) {
		int input;
		cin >> input;
		arr[i] = input;
	}

	sort(arr, arr + 3);

	if (arr[0] == arr[1]) {
		if (arr[1] == arr[2]) {
			money = 10000 + arr[0] * 1000;
		}
		else {
			money = 1000 + arr[0] * 100;
		}
	}
	else if (arr[1] == arr[2])
		money = 1000 + arr[1] * 100;
	else if (arr[0] != arr[1] && arr[1] != arr[2]) {
		money = arr[2] * 100;
	}

	cout << money;
}