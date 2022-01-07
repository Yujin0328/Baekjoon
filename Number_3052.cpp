#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int arr[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int count = 10;

	for (int i = 0; i < 10; i++) {
		int input;
		cin >> input;
		arr[i] = input % 42;
	}
	sort(arr, arr + 10);

	for (int i = 0; i < 9; i++) {
		if (arr[i] == arr[i + 1])
			count--;
	}
	cout << count;
}