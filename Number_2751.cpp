#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int test;
	cin >> test;
	int* arr = new int[test];

	for (int i = 0; i < test; i++) {
		int input;
		cin >> input;
		arr[i] = input;
	}

	sort(arr, arr + test);

	for (int i = 0; i < test; i++) {
		cout << arr[i] << "\n";
	}
}