#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int arr[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int max = 0;
	int input;
	cin >> input;

	while (input > 0) {
		arr[input % 10]++;
		input /= 10;
	}

	for (int i = 0; i < 10; i++) {
		if (i != 6 && i != 9) {
			if (max < arr[i])
				max = arr[i];
		}
	}

	if ((arr[6] + arr[9]) > max * 2) {
		max = (arr[6] + arr[9]) / 2;
		if ((arr[6] + arr[9]) % 2 == 1)
			max++;
	}

	cout << max;
}