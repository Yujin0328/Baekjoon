#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
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

	for (int i = 0; i < test; i++) {
		cout << arr[i] << " is ";
		if (arr[i] % 2 == 0)
			cout << "even\n";
		else
			cout << "odd\n";
	}

}