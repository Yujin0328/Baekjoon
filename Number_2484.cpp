#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
	int test, max = 0;
	cin >> test;

	for (int i = 0; i < test; i++) {
		int arr[4], money = 0;
		for (int j = 0; j < 4; j++) {
			int input;
			cin >> input;
			arr[j] = input;
		}
		sort(arr, arr + 4);

		if (arr[0] == arr[3])
			money = 50000 + arr[0] * 5000;
		else if (arr[0] == arr[1] && arr[1] == arr[2] && arr[2] != arr[3])
			money = 10000 + arr[0] * 1000;
		else if (arr[0] != arr[1] && arr[1] == arr[2] && arr[2] == arr[3])
			money = 10000 + arr[1] * 1000;
		else if (arr[0] == arr[1] && arr[1] != arr[2] && arr[2] == arr[3])
			money = 2000 + arr[0] * 500 + arr[3] * 500;
		else if (arr[0] == arr[1] && arr[1] != arr[2] && arr[2] != arr[3])
			money = 1000 + arr[0] * 100;
		else if (arr[0] != arr[1] && arr[1] == arr[2] && arr[2] != arr[3])
			money = 1000 + arr[1] * 100;
		else if (arr[0] != arr[1] && arr[1] != arr[2] && arr[2] == arr[3])
			money = 1000 + arr[2] * 100;
		else if (arr[0] != arr[1] && arr[1] != arr[2] && arr[2] != arr[3])
			money = arr[3] * 100;

		if (max < money)
			max = money;
	}

	cout << max;
}