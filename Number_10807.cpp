#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int number, count = 0;
	cin >> number;

	int* arr = new int[number];
	for (int i = 0; i < number; i++) {
		int input;
		cin >> input;
		arr[i] = input;
	}

	int find;
	cin >> find;

	for (int i = 0; i < number; i++) {
		if (find == arr[i])
			count++;
	}
	cout << count;
}