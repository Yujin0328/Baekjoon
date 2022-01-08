#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
	int n, size;
	cin >> n >> size;

	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		arr[i] = input;
	}

	sort(arr, arr + n);

	for (int i = 0; i < n; i++) {
		if (size >= arr[i]) {
			size++;
		}
		else
			break;
	}
	cout << size;

}