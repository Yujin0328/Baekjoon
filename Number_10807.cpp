#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;


int main() {
	int count, find, check = 0;
	cin >> count;

	int* arr = new int[count];

	for (int i = 0; i < count; i++) {
		int input;
		cin >> input;
		arr[i] = input;
	}
	cin >> find;

	for (int i = 0; i < count; i++) {
		if (arr[i] == find) {
			check++;
		}
	}

	cout << check;
}