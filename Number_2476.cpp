#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int people, max = 0;
	cin >> people;

	for (int i = 0; i < people; i++) {
		int arr[3], money = 0;
		for (int j = 0; j < 3; j++) {
			int input;
			cin >> input;
			arr[j] = input;
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
		else
			money = arr[2] * 100;

		if (money > max)
			max = money;
	}
	cout << max;
}